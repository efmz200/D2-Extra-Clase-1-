//
// Created by drump1 on 16/9/20.
//
#include <iostream>
#ifndef EXTRACLASE_1_GRAFO_H
#endif //EXTRACLASE_1_GRAFO_H
#define EXTRACLASE_1_GRAFO_H
#define INF 999999
#include "Vertice.h"
#include "Arista.h"
using namespace std;

class Grafo {
        Vertice *inicial;

    public:
        int lengrafo(){
            if (inicial==NULL){
                return 0;
            }
            else{
                int cont=0;
                Vertice *aux= inicial;
                while(aux!=NULL){
                    cont++;
                    aux=aux->sig;
                }
                return cont;
            }
        }
        Vertice *getVertice(string nomb) {

            Vertice *aux;
            aux = inicial;
            while (aux != NULL) {
                if (nomb == aux->nom) {

                }
                aux = aux->sig;
            }

            return NULL;
        }
        void agregaVert(string nomb){
            Vertice *nuevo=new Vertice(nomb);
            if (inicial==NULL){
                inicial=nuevo;
            }
            else {
                Vertice *aux = inicial;
                while (aux->sig != NULL) {
                    aux=aux->sig;
                }
                aux->sig=nuevo;
            }
        }
        void agregarArista(int pes,string nomb1,string nomb2){
            Vertice *aux1=getVertice(nomb1);
            Vertice *aux2=getVertice(nomb2);
            Arista *art= new Arista();
            art->refencia=aux2;
            art->sig=NULL;
            art->peso=pes;
            aux1->agregarArist(art);
        }
        string genmatriz(){
            int largo=lengrafo();
            largo++;
            string arr[largo] [largo];
            string salida;
            Vertice *aux=inicial;
            for (int i=1;i<largo;i++){
                arr[i][0]=aux->nom;
                arr[0][i]=aux->nom;
                aux=aux->sig;
            }
            for (int i=1;i<largo;i++){
                for (int a=1;a<largo;a++){
                    arr[a][i]=INF;
                    if(a==i){
                        arr[a][i]="0";
                    }
                }
            }
            aux=inicial;
            for (int i=1;i<largo;i++){
                Arista *auxArt=aux->arist;
                while(auxArt->sig!=NULL){
                    for(int a=1;a<largo;a++){
                        if(a==i){
                            continue;
                        }
                        Vertice *auxVert=auxArt->refencia;
                        if (arr[0][i]==auxVert->nom){
                            arr[a][i]=to_string(auxArt->peso);
                        }
                        auxArt=auxArt->sig;
                    }
                    aux=aux->sig;
                }
            }

            return NULL;
        }

    };



