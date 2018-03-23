#include "Monstruos.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

Monstruos::Monstruos(string nombre, int debilidad, int tipo)
{
    this->nombre = nombre;
    this->debilidad = debilidad;
    this->tipo = tipo;
    Vida();
}

Monstruos::Monstruos()
{
}

string Monstruos::getNombre()
{
    return nombre;
}

void Monstruos::setNombre(string nombre)
{

    this->nombre = nombre;
}

int Monstruos::getDebilidad()
{
    return debilidad;
}

void Monstruos::setDebilidad(int debilidad)
{

    this->debilidad = debilidad;
}

void Monstruos::Vida()
{
    if (tipo == 1)
    {
        vida = 24 + (rand() % 40);
        ataque = 9;
        defensa = 2;
        recompensa = 1;
    }
    if (tipo == 2)
    {
        vida = 12 + (rand() % 26);
        ataque = 7;
        defensa = 1;
        recompensa = 100;
    }
    if (tipo == 3)
    {
        vida = 4 + (rand() % 12);
        ataque = 5;
        defensa = 0;
        recompensa = 40;
    }
}

Monstruos::~Monstruos()
{
}