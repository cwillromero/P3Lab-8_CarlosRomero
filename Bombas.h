#include <string>
#include <iostream>
#include "Item.h"

using namespace std;

#ifndef BOMBAS_H
#define BOMBAS_H

class Bombas : public Item
{
  private:
    int ataque;
    int danio;

  public:
    Bombas();
    Bombas(int, int, string, string);
    int getAtaque();
    void setAtaque(int);
    int getDanio();
    ~Bombas();
};
#endif
