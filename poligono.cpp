#include "poligono.h"
#include "point.h"
#include <iostream>
#include <cmath>
#define PI 3.14159265

using namespace std;

    // seta os pontos do poligono, deve parar quando forem setados pontos iguais aos primeiros setados, ou quando se chegar no ultimo ponto
    void Poligono::setPoint(float x1, float x2){

        bool breaker=true;//deve parar de adicionar pontos ao programa
        float xa=0,ya=0;

        if(breaker==true){
            vertices++;
            if(vertices==99 || (x1==xa && x2==ya)){
                  breaker=false;
                }
            po[vertices].setXY(x1,x2);
            if(vertices==0){
                xa=x1;
                ya=x2;
            }
        };
        }

    //retorna a quantidade de vertices do poligono
    void Poligono::qntDeVertices(){
        cout << vertices << " vertices" << endl;
        }

    // retorna a area do poligono por meio da implementação do método de Gauss para calculo de áreas
    void Poligono::area(){
        float area=0, n1=0,n2=0;
        for(int conta=0;conta<vertices;conta++){
            n1=n1+po[conta].getX()*po[conta+1].getY();
            n2=n2+po[conta].getY()*po[conta+1].getX();
        }
        area=(n1-n2)/2;


        cout << "area vale " << area << endl;

    }

    //Translada os pontos 1 a 1 do objeto Poligono para isso usamos a função translada do objeto Point
    void Poligono::translada(float a, float b){
        for(int conta=0;conta<=vertices;conta++){
            po[conta].translada(a,b);
            }
    }

    //Rotacionamos os pontos do objeto Poligono, para isso devemos utilizar
    //uma matriz de rotação e rotacionar o ponto dado e com o vetor resultante devemos transladar cada um dos pontos do poligono nessa direção
    void Poligono::rotaciona(float ang, Point p){
        //converte o angulo para radianos
        ang=(ang*2*PI)/360;

        //percorremos o nosso vetor
        for(int conta=0;conta<=vertices;conta++){
                //colocamos o nosso vetor como se o ponto p fosse a origem
                po[conta]=po[conta].sub(p);

                //rotacionamos o nosso vetor em relação a origem(no caso o ponto p)
                po[conta].setXY(po[conta].getX()*cos(ang)-po[conta].getY()*sin(ang),po[conta].getX()*sin(ang)+po[conta].getY()*cos(ang));

                //colocamos o nosso novo vetor como algo em relação a origem
                po[conta]=po[conta].add(p);
            }

    }

    //imprime cada um dos pontos do poligono
    void Poligono::print(){
           for(int conta=0; conta<vertices;conta++){
               po[conta].imprime();
               cout << " >> ";
           }
           cout << endl;
    }


