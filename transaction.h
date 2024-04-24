
#include <iostream>

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <vector>
using namespace std;
enum TypeTransaction {ACHETER, VENDRE, RIEN_FAIRE};
class Transaction{
    private:
        TypeTransaction type;
        string nomAction;
        int quantite;
     public:
        TypeTransaction getType()const{return type;}
        string getNomAction()const{return nomAction;}
        int getQuantite()const{return quantite;}
        Transaction(TypeTransaction t):type(t){};
        Transaction(TypeTransaction t,string a,int q):type(t),nomAction(a),quantite(q){};
};
 #endif
