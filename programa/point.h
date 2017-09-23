#ifndef POINT_H
#define POINT_H

using namespace std;

class Point{
        protected:
            // criamos variaveis float x e y para o nosso ponto
            float x,y;
        public:
            // inicializamos os valores do ponto como 0 caso nenhum valor seja atribuido
            Point(){
                x=0;
                y=0;
            }
            // definimos as funções do nosso objeto e os seus retornos
            void setX(float _x);
            void setY(float _y);
            void setXY(float _x,float _y);
            float getX();
            float getY();
            Point add(Point p1);
            Point sub(Point p1);
            float norma();
            void translada(float a, float b);
            void imprime();
    };
#endif // POINT_H
