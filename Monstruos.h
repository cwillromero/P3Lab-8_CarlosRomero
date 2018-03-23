#include <string>
#include <iostream>

using namespace std;

#ifndef MONSTRUOS_H
#define MONSTRUOS_H

class Monstruos
{
private:
  string nombre;
  int debilidad;
  int tipo;
  int vida;
  int ataque;
  int defensa;
  int recompensa;

public:
  Monstruos();
  Monstruos(string, int, int);
  string getNombre();
  void setNombre(string);
  int getDebilidad();
  int getVida();
  void setVida(int);
  int getDefensa();
  void setDefensa(int);
  int getAtaque();
  void setAtaque(int);
  int getTipo();
  int getRecompensa();
  void setDebilidad(int);
  void Vida();
  ~Monstruos();
};
#endif
