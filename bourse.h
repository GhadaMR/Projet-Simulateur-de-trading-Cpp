#ifndef BOURSE_H
#define BOURSE_H

#include <string>
#include <vector>
#include<map>
#include "portefeuille.h"
#include"date.h"
#include"prixjournaliers.h"

class Bourse{
 protected:
    Date dateAujourdhui;
 public:
    Date getDateAujourdhui() const{ return dateAujourdhui;}
    void setDateAujourdhui(Date date){dateAujourdhui=date;}
    virtual vector<PrixJournalier> getPrixJournaliersDisponiblesParAujourdhui()const=0;
    virtual vector<string>getActionsDisponiblesParAujourdhui()const=0;
    virtual vector<string> getActionsDisponiblesParDate(Date date)const=0;
    virtual vector<string> getActionsDisponiblesParPrix(double prix)const=0;
    virtual vector<PrixJournalier> getPrixJournaliersParAction(string action)const=0;
    virtual PrixJournalier getPrixJournalierParActionAujourdhui(string action)const=0;
    virtual vector<PrixJournalier> getPrixJournaliersParDate(Date date)const=0;
    virtual vector<PrixJournalier> getPrixJournaliersParPrix(double prix)const=0;
    virtual vector<PrixJournalier> getPrixJournaliersParPrixAujourdhui(double prix)const=0;
    virtual ~Bourse(){};

};

class BourseVector: public Bourse
{
 private:
    vector<PrixJournalier> prixj;
 public:
    BourseVector( vector<PrixJournalier> historique) : prixj(historique) {};
    vector<PrixJournalier> getPrixjournaliers();
    vector<PrixJournalier> getPrixJournaliersDisponiblesParAujourdhui()const;
     vector<string> getActionsDisponiblesParAujourdhui()const;
     vector<string> getActionsDisponiblesParDate(Date date)const;
     vector<string> getActionsDisponiblesParPrix(double prix)const;
     vector<PrixJournalier> getPrixJournaliersParAction(string action)const;
     PrixJournalier getPrixJournalierParActionAujourdhui(string action)const;
     vector<PrixJournalier> getPrixJournaliersParDate(Date date)const;
     vector<PrixJournalier> getPrixJournaliersParPrix(double prix)const;
     vector<PrixJournalier> getPrixJournaliersParPrixAujourdhui(double prix)const;
};
/*class BourseMap : public Bourse
{
private:
    vector<PrixJournalier> prixj;
    multimap<Date, PrixJournalier> bourseMap;
 public:
     BourseMap(vector<PrixJournalier> historique):prixj(historique){
        for ( auto prixj : historique){
            bourseMap.insert(make_pair(prixj.getDate(), prixj));}}



      vector<PrixJournalier> getPrixJournaliersDisponiblesParAujourdhui()const;
     vector<string> getActionsDisponiblesParAujourdhui()const;
     vector<string> getActionsDisponiblesParDate(Date date)const;
     vector<string> getActionsDisponiblesParPrix(double prix)const;
     vector<PrixJournalier> getPrixJournaliersParAction(string action)const;
     PrixJournalier getPrixJournalierParActionAujourdhui(string action)const;
     vector<PrixJournalier> getPrixJournaliersParDate(Date date)const;
     vector<PrixJournalier> getPrixJournaliersParPrix(double prix)const;
     vector<PrixJournalier> getPrixJournaliersParPrixAujourdhui(double prix)const;
};*/
#endif
