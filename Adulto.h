#include <string>
#include <iostream>
#include "Heroe.h"

using namespace std;

#ifndef Adulto_H
#define Adulto_H

class Adulto : public Heroe
{
  public:
    Adulto();
    Adulto(string, int, Item*, int, int);
    Monstruos *Ataque(Monstruos *);
    Monstruos *AtaqueItem(Monstruos *);
    Monstruos *AtaqueEspecial(Monstruos *);
    void Defensa(Monstruos *);
    ~Adulto();
};
#endif
