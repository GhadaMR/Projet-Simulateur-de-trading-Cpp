#ifndef TRADER_H
#define TRADER_H

#include <string>
#include <vector>
#include "bourse.h"
#include "portefeuille.h"
#include"transaction.h"

class Trader{
    public:
        virtual Transaction choisirTransaction(const Bourse& bourse, const Portefeuille &portefeuille)=0;
        Trader(){};
        virtual ~Trader() {};
    };


#endif

