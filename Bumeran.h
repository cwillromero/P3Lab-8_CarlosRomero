#include <string>
#include <iostream>
#include "Item.h"

using namespace std;

#ifndef BUMERAN_H
#define BUMERAN_H

class Bumeran : public Item
{
  private:
    int ataque;

  public:
    Bumeran();
    Bumeran(int, string, string);
    int getAtaque();
    void setAtaque(int);
    ~Bumeran();
};
#endif