#include <string>
#include <iostream>
#include "Heroe.h"

using namespace std;

#ifndef JOVEN_H
#define JOVEN_H

class Joven : public Heroe
{
  public:
    Joven();
    Joven(string, int, int, int, int);
    Monstruos *Ataque(Monstruos *);
    ~Joven();
};
#endif
