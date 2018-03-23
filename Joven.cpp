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

Monstruos *Joven::Ataque(Monstruos *)
{
}

Joven::~Joven()
{
}