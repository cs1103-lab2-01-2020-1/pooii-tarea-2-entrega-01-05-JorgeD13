//
// Created by Usuario on 30/04/2020.
//

#ifndef TAREA_3_VEHICULO_H
#define TAREA_3_VEHICULO_H

#include <iostream>
#include <random>
using namespace std;

class vehiculo{
protected:
  int n_ruedas;
  int velocidad;
public:
  vehiculo operator=(vehiculo& v);
};

class camion : public vehiculo{
public:
  camion();
  virtual ~camion();
  virtual int get_ruedas();
  virtual int get_velocidad();
};

class bicicleta : public vehiculo{
public:
  bicicleta();
  virtual ~bicicleta();
  virtual int get_ruedas();
  virtual int get_velocidad();
};

#endif //TAREA_3_VEHICULO_H
