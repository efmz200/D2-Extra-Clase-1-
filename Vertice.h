//
// Created by drump1 on 19/9/20.
//

#ifndef EXTRACLASE_1_VERTICE_H
#define EXTRACLASE_1_VERTICE_H
#include "Arista.h"
#include <iostream>
using namespace std;
class Vertice {
    string nom;
    Vertice *sig;
    Arista *arist;

    friend class Grafo;

    Vertice(string nomb) {
        nom = nomb;
        sig = NULL;
        arist = NULL;
    }
    void agregarArist(Arista *arista){
        if (arist==NULL){
            arist=arista;
        }
        else{
            Arista *aux=arist;
            while (aux->sig!=NULL){
                aux=aux->sig;
            }
            aux->sig=arista;
        }

    }
};


#endif //EXTRACLASE_1_VERTICE_H
