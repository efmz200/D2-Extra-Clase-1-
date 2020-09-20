//
// Created by drump1 on 19/9/20.
//

#ifndef EXTRACLASE_1_ARISTA_H
#define EXTRACLASE_1_ARISTA_H
#include "Vertice.h"
#include <iostream>
using namespace std;

class Arista {
public:
    int peso;
    Arista *sig;
    Vertice *refencia;
    friend class Grafo;
    Arista(int pes,Vertice *siguiente){
        peso=pes;
        sig=NULL;
        refencia=siguiente;
    }
    void setNext(Arista *next) {
        sig=next;
    }


};


#endif //EXTRACLASE_1_ARISTA_H
