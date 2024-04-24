

#ifndef TRADERALEATOIRE_H
#define TRADERALEATOIRE_H

#include <string>
#include <vector>
#include "bourse.h"
#include "portefeuille.h"
#include"transaction.h"
#include"trader.h"


class TraderAleatoire: public Trader{
  public:
      Transaction choisirTransaction(const Bourse& bourse, const Portefeuille &portefeuille);
      TraderAleatoire():Trader(){};

};

#endif  // TRADER_H

