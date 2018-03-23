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

void Joven::Defensa(Monstruos *moster)
{
    vida = vida - moster->getAtaque() + 2;
}

Monstruos *Joven::AtaqueItem(Monstruos *moster)
{
    if (item->getNombre() == "Bumeran")
    {
        if (moster->getDebilidad() == 1)
        {
            moster->setVida(moster->getVida() - 10 + moster->getDefensa());
        }
        else
        {
            moster->setVida(moster->getVida() - 5 + moster->getDefensa());
        }
    }

    if (item->getNombre() == "Arco Y Flechas")
    {
        if (moster->getDebilidad() == 2)
        {
            moster->setVida(moster->getVida() - 8);
        }
        else
        {
            moster->setVida(moster->getVida() - 4);
        }
    }

    if (item->getNombre() == "Bombas")
    {
        if (moster->getDebilidad() == 1)
        {
            moster->setVida(moster->getVida() - 20 + moster->getDefensa());
            vida = vida - 4;
        }
        else
        {
            moster->setVida(moster->getVida() - 10 + moster->getDefensa());
            vida = vida - 4;
        }
    }
    return moster;
}

Monstruos *Joven::AtaqueEspecial(Monstruos *moster)
{
}

Joven::~Joven()
{
}