#include <iostream>
#include "point.h"
#ifndef POLIGONO_H
#define POLIGONO_H

using namespace std;

class Poligono
{
private:
    //definimos um vetor de Pontos para armazenarmos os pontos do nosso poligono
    Point po[100];
    // iniciamos o numero de vertices como -1 pois 1 vertice será lida 2 vezes
    int vertices=-1;
public:
    // inicialização sem nada
    Poligono(){

    };
    // definimos as funções do nosso objeto e os seus retornos
    void setPoint(float x1, float x2);
    void qntDeVertices();
    void area();
    void translada(float a, float b);
    void rotaciona(float ang, Point p);
    void print();

};

#endif // POLIGONO_H
