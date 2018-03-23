#include "Bumeran.h"
#include <iostream>
#include <string>

using namespace std;

Bumeran::Bumeran(int ataque, string nombre, string color) : Item(nombre, color)
{
    this->ataque = ataque;
}

Bumeran::Bumeran()
{
}

int Bumeran::getAtaque()
{
    return ataque;
}

void Bumeran::setAtaque(int ataque)
{

    this->ataque = ataque;
}

Bumeran::~Bumeran()
{
}