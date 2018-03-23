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
    moster->setVida(moster->getVida() - 4 + moster->getDefensa());
    return moster;
}

Monstruos *Joven::Defensa(Monstruos *moster)
{
    vida = vida - moster->getAtaque() + 2;
    return moster;
}

Monstruos *Joven::AtaqueItem(Monstruos *moster)
{
    if (item->getNombre() == "Bumeran")
    {
        moster->setVida(moster->getVida() - 5 + moster->getDefensa());
    }

    if (item->getNombre() == "Arco Y Flechas")
    {
        moster->setVida(moster->getVida() - 4);
    }

    if (item->getNombre() == "Bombas")
    {
        moster->setVida(moster->getVida() - 10 + moster->getDefensa());
        vida = vida - 4;
    }
    return moster;
}

Joven::~Joven()
{
}