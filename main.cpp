#include "Item.h"
#include "Bombas.h"
#include "ArcoYFlechas.h"
#include "Bumeran.h"
#include "Monstruos.h"
#include "Heroe.h"
#include "Joven.h"
#include "Adulto.h"
#include <iostream>
#include <string>
#include <vector>

Heore *heore;
vector<Monstruos *> mostros;

int menu();
void crearJugador();

int main()
{
    crearJugador();
    bool x = true;
    while (x == true)
    {
        int opcion = menu();
    }
}

int menu()
{
    int opcion = 1;
}

void crearJugador()
{
    string nombre;
    int vida;
    Item *item;
    int jefes_derrotados;
    int dinero;
    cout << "--------- Laboratorio #8---------" << endl
         << endl;
    cout << "Ingrese el Nombre del Heroe: ";
    cin >> nombre;
    cout << endl;
    vida = 12;
    int opcion = 0;
    while (opcion < 1 && opcion > 3)
    {
        cout << "Items: " << endl
             << "1- Bumeran." << endl
             << "2- Arcos y Flechas" << endl
             << "3- Bombas" << endl;
        cout << "Escoja Su Item: " << endl;
        cin >> opcion;
    }
    if (opcion = 1)
    {
        item = new Bumeran(5, "Bumeran", "Rojo");
    }
    if (opcion = 2)
    {
        item = new ArcoYFlechas(4, "Arco Y Flechas", "Azul");
    }
    if (opcion = 3)
    {
        item = new Bombas(10, 4, "Bombas", "Verde");
    }
}
