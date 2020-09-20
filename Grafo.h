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
class Vertice;
class Grafo;
class Arista;





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
        void iniciar() {
            inicial = NULL;

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
        void agregarArista(int peso,string nomb1,string nomb2){
            Vertice *aux1=getVertice(nomb1);
            Vertice *aux2=getVertice(nomb2);
            Arista *art= new Arista(peso,aux2);
            aux1->agregarArist(art);
        }
        string genmatriz(){
            int largo=lengrafo();
            string arr[largo] [largo];
            string salida;
            Vertice *aux=inicial;
            for (int i=1;i<largo;i++){
                arr[i][0]=aux->nom;
                arr[0][i]=aux->nom;
                aux=aux->sig;
            }
            aux=inicial;
            string a="hola";
            a.length();

            return NULL;
        }

    };



