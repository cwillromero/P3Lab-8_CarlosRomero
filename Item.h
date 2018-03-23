#include <string>
#include <iostream>

using namespace std;

#ifndef ITEM_H
#define ITEM_H

class Item
{

  private:
    string nombre;
    string color;

  public:
    Item();
    Item(string, string);
    string getNombre();
    void setNombre(string);
    string getColor();
    void setColor(string);
    ~Item();
};
#endif