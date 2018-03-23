#include <string>
#include <iostream>
#include "Item.h"
#include "Monstruos.h"
using namespace std;

#ifndef HEROE_H
#define HEROE_H

class Heroe
{

  private:
    string nombre;
    int vida;
    Item *item;
    int jefes_derrotados;
    int dinero;

  public:
    Heroe();
    Heroe(string, int, int, int, int);
    string getNombre();
    void setNombre(string);
    int getVida();
    void setVida(int);
    Item *getItem();
    void setItem(Item *);
    int getJefes_derrotados();
    void setJefes_derrotados(int);
    int getDinero();
    void setDinero(int);
    virtual Monstruos *Ataque(Monstruos *) = 0;

    ~Heroe();
};
#endif