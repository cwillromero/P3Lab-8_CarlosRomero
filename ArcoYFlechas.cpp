#include "ArcoYFlechas.h"
#include <iostream>
#include <string>
using namespace std;

ArcoYFlechas::ArcoYFlechas(int ataque, string nombre, string color) : Item(nombre, color)
{
    this->ataque = ataque;
}

ArcoYFlechas::ArcoYFlechas()
{
}

int ArcoYFlechas::getAtaque()
{
    return ataque;
}

void ArcoYFlechas::setAtaque(int ataque)
{

    this->ataque = ataque;
}

ArcoYFlechas::~ArcoYFlechas()
{
}