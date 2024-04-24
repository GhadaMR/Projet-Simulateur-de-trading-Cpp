#ifndef PRIXJOURNALIERS_H
#define PRIXJOURNALIERS_H

#include <string>
#include <vector>
#include"date.h"
class PrixJournalier {
    Date date;
    string action;
    double prix;
public:
    PrixJournalier(){};
    friend istream& operator>>(istream& flux, PrixJournalier& pj);
    friend ostream& operator<<(ostream& flux, const PrixJournalier& pj);
    Date getDate() const { return date; };
    void setDate(const Date& d) { date = d; }
    string getAction() const { return action; };
    void setAction(const string& a) { action = a; }
    double getPrix() const { return prix; };
    void setPrix(double p) { prix = p; }
};

ostream& operator<<(ostream& flux, const PrixJournalier& pj) {
    flux << pj.date << "   " << pj.action << "  \n" << pj.prix << endl;
    return flux;
}

istream& operator>>(istream& flux, PrixJournalier& pj) {
    string ligne;
    if (getline(flux, ligne)) {
        stringstream ss(ligne);
        string cell;
        getline(ss, cell, '/');
        Date d;
        d.jour = stoi(cell);
        getline(ss, cell, '/');
        d.mois = stoi(cell);
        getline(ss, cell, ';');
        d.annee = stoi(cell);
        pj.setDate(d);
        getline(ss, cell, ';');
        pj.setAction(cell);
        getline(ss, cell);
        pj.setPrix(stod(cell));
    }
    return flux;
}

#endif
