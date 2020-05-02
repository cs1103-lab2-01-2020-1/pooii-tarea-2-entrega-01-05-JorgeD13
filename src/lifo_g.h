//
// Created by Usuario on 1/05/2020.
//

#ifndef TAREA_3_LIFO_G_H
#define TAREA_3_LIFO_G_H

template<typename T>
class lifo_g{
    int tope;
    int size;
    int capacity;
    T* data;
public:
    lifo_g(int n){
        tope=-1;
        size=0;
        capacity=n;
        data = new T[capacity];
    }

    ~lifo_g(){
        delete[] data;
    }

    T top(){
        return data[tope];
    }

    void push(T n){
        if (tope+1==capacity){
            std::cout<<std::endl<<"Stack Overflow"<<tope<<std::endl;
            return;
        }
        tope++;
        data[tope]=n;
    }

    void pop(){
        if(tope==-1){
            std::cout<<std::endl<<"Stack Underlow"<<tope<<std::endl;
            return;
        }
        tope--;
    }

    int get_size(){
        return tope+1;
    }
};

#endif //TAREA_3_LIFO_G_H
