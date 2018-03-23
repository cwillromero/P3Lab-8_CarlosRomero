#include "Bombas.h"
#include <iostream>
#include <string>

using namespace std;

Bombas::Bombas(int ataque, int danio, string nombre, string color) : Item(nombre, color)
{
    this->ataque = ataque;
    this->danio = danio;
}

Bombas::Bombas()
{
}

int Bombas::getAtaque()
{
    return ataque;
}

int Bombas::getDanio()
{
    return danio;
}

void Bombas::setAtaque(int ataque)
{

    this->ataque = ataque;
}

Bombas::~Bombas()
{
}