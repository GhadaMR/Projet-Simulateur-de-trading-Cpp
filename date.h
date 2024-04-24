

#ifndef DATE_H
#define DATE_H

#include <string>
#include <vector>
class Date{
    public:
     int jour;
     int mois;
     int annee;
    public:
     void incrementerDate();
     Date (int j,int m,int a);
     Date(){};
     friend ostream& operator<<(ostream& flux, const Date& d);
     friend istream& operator>>(istream& flux, Date& d);
     bool operator==(const Date& d)const;
     bool operator<(const Date& d)const;

};
ostream& operator<<( ostream& flux, const Date& d){
    flux<<d.jour<<"/"<<d.mois<<"/"<<d.annee<<endl;
    return flux;
}
istream& operator>>(istream& flux, Date& d){
    char tab[100];
    flux.getline(tab, 100, '/');
    int jour = atoi(tab);

    flux.getline(tab, 100, '/');
    int mois = atoi(tab);

    flux.getline(tab, 100,' ');
    int annee = atoi(tab);

    d = Date(jour, mois, annee);
    flux.ignore();
    return flux;
}
#endif
