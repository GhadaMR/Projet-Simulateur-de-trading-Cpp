
#ifndef SIMULATION_H
#define SIMULATION_H

#include <string>
#include <vector>
#include "bourse.h"
#include "trader.h"
class Simulation {
     private:
         Date dateDebut;
         Date dateFin;
         Date dateCourante;
         double budget;
     public:
      static map<string, long> executer(Bourse& bourse, Trader& trader, Date dateDebut, Date dateFin, double solde);
};

#endif
