//
// Created by Usuario on 30/04/2020.
//

#ifndef TAREA_3_ESTADO_H
#define TAREA_3_ESTADO_H

#include <string>
using namespace std;

class Estado{
private:
    string estado1;
    string estado2;
    string estado3;
    int k;
public:
    Estado();
    string get_estado();
};

#endif //TAREA_3_ESTADO_H
