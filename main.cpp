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
void crearMonster();
void Eliminar();
void estado();

int main()
{
    crearJugador();
    int opcion = 0;
    while (heroe->getVida() > 0 && opcion != 8)
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
            estado();
            break;
        }
        case 3:
        {
            crearMonster();
            break;
        }
        case 4:
        {
            Eliminar();
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
            break;
        }
        case 8:
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
    while (opcion < 1 || opcion > 8)
    {
        cout << "--------- Laboratorio #8---------" << endl
             << endl;
        cout << "1- Pelear con Monstruo" << endl;
        cout << "2- Ver Estado y Monstruos" << endl;
        cout << "3- Crear Monstruo" << endl;
        cout << "4- Eliminar Monstruo" << endl;
        cout << "5- Cambiar Item" << endl;
        cout << "6- Tienda" << endl;
        cout << "7- Guardar Partida" << endl;
        cout << "8- Salir" << endl;
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
        cout << endl;
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

void crearMonster()
{
    string nombre;
    cout << "Ingrese el nombre del monstruo: " << endl;
    cin >> nombre;
    int debilidad = 0;
    while (debilidad < 1 || debilidad > 3)
    {
        cout << "Items: " << endl
             << "1- Bumeran." << endl
             << "2- Arcos y Flechas" << endl
             << "3- Bombas" << endl;
        cout << "Escoja la debilidad del Monstruo : " << endl;
        cin >> debilidad;
        cout << endl;
    }
    int tipo = 0;
    while (tipo < 1 || tipo > 3)
    {
        cout << "Escoja el Rango: " << endl
             << "1- Jefe" << endl
             << "2- Semi-Jefe" << endl
             << "3- Común" << endl;
        cout << "Escoja el rango : " << endl;
        cin >> tipo;
    }
    cout << endl;
    mostros.push_back(new Monstruos(nombre, debilidad, tipo));
}

void estado()
{
    cout << "----Estado----" << endl;
    cout << "Nombre: " << heroe->getNombre() << "; Vidas: " << heroe->getVida() << "; Dinero: " << heroe->getDinero() << endl;
    cout << "Item: " << heroe->getItem()->getNombre() << "; Jefes Derrotados: " << heroe->getJefes_derrotados() << endl
         << endl;
    if (mostros.size() > 0)
    {
        cout << "----Monstruos----" << endl;
        for (int i = 0; i < mostros.size(); i++)
        {
            string name;
            name = mostros[i]->getNombre();
            if (name != "Eliminado")
            {
                cout << i << ") " << name << "; ";
                int x = mostros[i]->getDebilidad();
                if (x == 1)
                {
                    cout << "Debilidad: "
                         << "Bumeran";
                }
                if (x == 2)
                {
                    cout << "Debilidad: "
                         << "Arco y Flechas";
                }
                if (x == 3)
                {
                    cout << "Debilidad: "
                         << "Bombas";
                }
                int y = mostros[i]->getTipo();
                if (y == 1)
                {
                    cout << "; Rango: "
                         << "Jefe";
                }
                if (y == 2)
                {
                    cout << "; Rango: "
                         << "Semi-Jefe";
                }
                if (y == 3)
                {
                    cout << "; Rango: "
                         << "Comunes";
                }
                cout << endl;
            }
            else
            {
                cout << i << ") "
                     << "Eliminado" << endl;
            }
        }
    }
}

void Eliminar()
{
    cout << "----Monstruos----" << endl;
    for (int i = 0; i < mostros.size(); i++)
    {
        string name;
        name = mostros[i]->getNombre();
        if (name != "Eliminado")
        {
            cout << i << ") " << name << "; ";
            int x = mostros[i]->getDebilidad();
            if (x == 1)
            {
                cout << "Debilidad: "
                     << "Bumeran";
            }
            if (x == 2)
            {
                cout << "Debilidad: "
                     << "Arco y Flechas";
            }
            if (x == 3)
            {
                cout << "Debilidad: "
                     << "Bombas";
            }
            int y = mostros[i]->getTipo();
            if (y == 1)
            {
                cout << "; Rango: "
                     << "Jefe";
            }
            if (y == 2)
            {
                cout << "; Rango: "
                     << "Semi-Jefe";
            }
            if (y == 3)
            {
                cout << "; Rango: "
                     << "Comunes";
            }
            cout << endl;
        }
        else
        {
            cout << i << ") "
                 << "Eliminado" << endl;
        }
    }
    int pos = -1;
    while (pos < 0 || pos > mostros.size())
    {
        cout << "Ingrese la Posición que desea Eliminar" << endl;
        cin >> pos;
    }
    mostros[pos] = new Monstruos("Eliminado", 1, 4);
}
