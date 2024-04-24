#include <iostream>

#ifndef TITRE_H
#define TITRE_H

#include <string>
#include <vector>
using namespace std;


class Titre{
    private:
      string action;
      int qt;
    public:
      Titre(string a, float q): action(a), qt(q){};
      string getAction()const {return action;};
      int getQt()const{return qt;};
      void setQt(int quantite){qt=quantite;}
};

#endif
