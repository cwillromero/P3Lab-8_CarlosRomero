#include "Adulto.h"
#include <iostream>
#include <string>

using namespace std;
Adulto::Adulto(string nombre, int vida, Item *item, int jefes_derrotados, int dinero) : Heroe(nombre, vida, item, jefes_derrotados, dinero)
{
}

Adulto::Adulto()
{
}

Monstruos *Adulto::Ataque(Monstruos *moster)
{
    if (moster->getTipo() == 1)
    {
        moster->setVida(moster->getVida() - 8 + moster->getDefensa());
    }
    if (moster->getTipo() == 2)
    {
        moster->setVida(moster->getVida() - 8 + moster->getDefensa());
    }
    if (moster->getTipo() == 3)
    {
        moster->setVida(moster->getVida() - 8 + moster->getDefensa());
    }
}

Monstruos *Adulto::Defensa(Monstruos *)
{
}

Monstruos *Adulto::AtaqueItem(Monstruos *)
{
}


Adulto::~Adulto()
{
}