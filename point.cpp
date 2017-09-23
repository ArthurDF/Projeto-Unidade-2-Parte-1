#include <iostream>
#include "point.h"
#include <cmath>

using namespace std;

    void Point::setX(float _x){
        x=_x;
    }
    void Point::setY(float _y){
        y=_y;
    }
    void Point::setXY(float _x, float _y){
        x=_x;
        y=_y;
    }
    float Point::getX(){
        return x;
    }
    float Point::getY(){
        return y;
    }
    Point Point::add(Point p1){
        Point p2;
        p2.x=p1.x + x;
        p2.y=p1.y + y;
        return p2;
    }
    Point Point::sub(Point p1){
        Point p2;

        p2.x=x - p1.x ;
        p2.y=y - p1.y;
        return p2;
    }
    float Point::norma(){
        return sqrt(pow(x,2)+pow(y,2));
    }
    void Point::translada(float a, float b){
        x=x+a;
        y=y+b;
    }
    void Point::imprime(){
        cout << "(" << x << ", " << y << ")";
    }


