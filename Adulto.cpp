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
    moster->setVida(moster->getVida() - 8 + moster->getDefensa());
    return moster;
}

Monstruos *Adulto::Defensa(Monstruos *moster)
{
    vida = vida - moster->getAtaque() + 4;
    return moster;
}

Monstruos *Adulto::AtaqueItem(Monstruos *moster)
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

Adulto::~Adulto()
{
}