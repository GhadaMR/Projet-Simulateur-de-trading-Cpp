#ifndef PORTEFEUILLE_H
#define PORTEFEUILLE_H

#include <string>
#include <vector>
#include "bourse.h"
#include"titre.h"



class Portefeuille{
   private:

       vector<Titre> titres;
       double solde;
   public:

       Portefeuille(vector<Titre> t, double s):titres(t), solde(s){};
       double getSolde()const{return solde;};
       void setSolde(double s){solde=s;};
       vector<Titre> getTitres()const{return titres;};
       void ajouterTitre (Titre titre);
       bool retirerTitre(Titre* titre);
       void deposerMontant(double montant);
       void retirerMontant(double montant);
};
#endif
