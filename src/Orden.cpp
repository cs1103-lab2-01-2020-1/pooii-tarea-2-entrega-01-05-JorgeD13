//
// Created by Usuario on 27/04/2020.
//
#include "Orden.h"

Orden::Orden(){}

void Orden::agregar_producto(producto* producto){
    productos.push_back(producto);
}

//No llegué a utilizar esta función
void Orden::quitar_producto(){
    int i=1, n;
    for (auto x:productos)
        cout<<i++<<x->get_nombre()<<" Cantidad:"<<x->get_q()<<endl;

    cout<<endl<<"El elemento que desea elmininar (por numero) es: ";
    cin>>n;
    vector<producto*>::iterator it=productos.begin()+n-1;
    productos.erase(it);
}

vector<producto*> Orden::get_productos(){
    return productos;
}

bicicleta Orden::get_b(){
    return b;
}

camion Orden::get_c(){
    return c;
}

Estado Orden::get_est(){
    return est;
}