#include <iostream>
#include "point.h"
#include "poligono.h"
#ifndef RETANGULO_H
#define RETANGULO_H

using namespace std;

class Retangulo : public Poligono{

public:
    Retangulo(float x,float y,float largura, float altura){
            // setamos todos os pontos do retângulo no sentido anti-horário
            setPoint((x-largura),(y-altura));
            setPoint((x),(y-altura));
            setPoint((x),(y));
            setPoint((x-largura),(y));
            setPoint((x-largura),(y-altura));
         }
    // como nós estabelecemos uma relação de herança todas as funções do nosso objeto retangulo na realidade serão funções do objeto Poligono
};


#endif // RETANGULO_H
