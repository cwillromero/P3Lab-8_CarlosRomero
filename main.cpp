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

using namespace std;

Heroe *heroe;
vector<Monstruos *> mostros;

int menu();
void crearJugador();

int main()
{
    crearJugador();
    int opcion = 0;
    while (heroe->getVida() > 0 && opcion != 7)
    {
        opcion = menu();
        switch (opcion)
        {
        case 1:
        {
            break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            break;
        }
        case 4:
        {
            break;
        }
        case 5:
        {
            break;
        }
        case 6:
        {
            break;
        }
        case 7:
        {
            heroe->setVida(0);
            break;
        }
        }
    }
}

int menu()
{
    int opcion = 0;
    while (opcion < 1 || opcion > 7)
    {
        cout << "--------- Laboratorio #8---------" << endl
             << endl;
        cout << "1- Pelear con Monstruo" << endl;
        cout << "2- Ver Estado" << endl;
        cout << "3- Crear Monstruo" << endl;
        cout << "4- Cambiar Item" << endl;
        cout << "5- Tienda" << endl;
        cout << "6- Guardar Partida" << endl;
        cout << "7- Salir" << endl;
        cout << "Escoja: ";
        cin >> opcion;
        if (mostros.size() < 1 && (opcion == 1 || opcion == 5 || opcion == 6))
        {
            cout << "Debe crear Monstruos Primero!. " << endl;
            opcion = 0;
        }
        cout << endl;
    }
    return opcion;
}

void crearJugador()
{
    string nombre;
    Item *item;
    int jefes_derrotados;
    int dinero;
    cout << "--------- Laboratorio #8---------" << endl
         << endl;
    cout << "Ingrese el Nombre del Heroe: ";
    cin >> nombre;
    cout << endl;
    int vida = 12;
    int opcion = 0;
    while (opcion < 1 || opcion > 3)
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
    jefes_derrotados = 0;
    dinero = 0;
    heroe = new Joven(nombre, vida, item, jefes_derrotados, dinero);
}
