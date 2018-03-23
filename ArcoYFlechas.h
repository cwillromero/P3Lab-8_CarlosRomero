#include <string>
#include <iostream>
#include "Item.h"

using namespace std;

#ifndef ARCOYFLECHAS_H
#define ARCOYFLECHAS_H

class ArcoYFlechas : public Item
{
  private:
    int ataque;

  public:
    ArcoYFlechas();
    ArcoYFlechas(int, string, string);
    int getAtaque();
    void setAtaque(int);
    ~ArcoYFlechas();
};
#endif