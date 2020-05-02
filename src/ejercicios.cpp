//
// Created by Usuario on 1/05/2020.
//

#include "ejercicios.h"


void ejercicio1(){
    Menu menu;
    menu.ejecutar();
}

void ejercicio2(){
    cout<<"Ejercicio2:"<<endl<<"Lifo:"<<endl;
    lifo stack(1);
    stack.push(5);
    stack.push(6);  //Ya no entra
    cout<<stack.top()<<", size:"<<stack.get_size()<<endl;
    stack.pop();
    stack.push(7);
    cout<<stack.top()<<", size:"<<stack.get_size()<<endl;
    stack.pop();
    stack.pop();  //No hay elementos
}

void ejercicio3(){
    cout<<"Ejercicio3:"<<endl;
    int array1[5] = {3, 5, 2, 4, 1};
    int array2[5] = {10, 7, 8, 6, 9};
    list<int> lista1;
    list<int> lista2;
    for (int i=0; i<5; i++){
        lista1.push_back(array1[i]);
        lista2.push_back(array2[i]);
    }

    lista1.merge(lista2);
    cout<<"Se agrega la lista 2 a la lista 1:"<<endl;
    for(auto x:lista1)
        cout<<x;

    lista1.sort();
    cout<<"\n\nLista Sort:\n";
    for(auto y:lista1)
        cout<<y;

    cout<<"\n\nEl elemento 5:\n";
    list<int>::iterator it = find(lista1.begin(), lista1.end(), 5);
    cout<<*it<<"\n\n";

    cout<<"El elemento 10:\n";
    list<int>::iterator it2 = lower_bound(lista1.begin(), lista1.end(), 10);
    cout<<*it2<<"\n\n";
}

void ejercicio4(){
    cout<<"Ejercicio4:"<<endl;
    cout<<endl<<endl<<"Lifo Genérico"<<endl;
    lifo_g<int> s(3);
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<", size:"<<s.get_size()<<endl;
    s.push(4);  //Ya no entra
    cout<<s.top()<<", size:"<<s.get_size();
}