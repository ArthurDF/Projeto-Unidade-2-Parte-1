#include <iostream>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{
    Retangulo ret(0,0,3,4);
    Point centroDeMassa;

    centroDeMassa.setXY(-4.5,2);
    ret.print();
    ret.qntDeVertices();
    ret.area();
    ret.translada(-3,4);
    ret.print();
    ret.area();
    ret.rotaciona(30,centroDeMassa);
    ret.print();
    ret.area();
    return 0;
}
