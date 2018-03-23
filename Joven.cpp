#include "Joven.h"
#include <iostream>
#include <string>

using namespace std;
Joven::Joven(string nombre, int vida, Item *item, int jefes_derrotados, int dinero) : Heroe(nombre, vida, item, jefes_derrotados, dinero)
{
}

Joven::Joven()
{
}

Monstruos *Joven::Ataque(Monstruos *moster)
{
    if (moster->getTipo() == 1)
    {
        moster->setVida(moster->getVida() - 4 + moster->getDefensa());
    }
    if (moster->getTipo() == 2)
    {
        moster->setVida(moster->getVida() - 4 + moster->getDefensa());
    }
    if (moster->getTipo() == 3)
    {
        moster->setVida(moster->getVida() - 4 + moster->getDefensa());
    }
}

Monstruos *Joven::Defensa(Monstruos *moster)
{
    if (moster->getTipo() == 1)
    {
        vida = vida - moster->getAtaque();
    }
    if (moster->getTipo() == 2)
    {
        moster->setVida(moster->getVida() - 4 + moster->getDefensa());
    }
    if (moster->getTipo() == 3)
    {
        moster->setVida(moster->getVida() - 4 + moster->getDefensa());
    }
}

Monstruos *Joven::AtaqueItem(Monstruos *moster)
{
}

Joven::~Joven()
{
}