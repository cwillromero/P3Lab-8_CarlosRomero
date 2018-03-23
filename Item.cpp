
#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

Item::Item(string nombre, string color)
{
    this->nombre = nombre;
    this->color = color;
}

Item::Item()
{
}

string Item::getNombre()
{
    return nombre;
}

void Item::setNombre(string nombre)
{

    this->nombre = nombre;
}

string Item::getColor()
{
    return color;
}

void Item::setColor(string color)
{

    this->color = color;
}

Item::~Item()
{
}