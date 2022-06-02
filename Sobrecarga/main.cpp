#include <iostream>
#include "punto.h"

using namespace std;

int main(){
    Punto p1; //(0,0)
    Punto p2(1,2);
    Punto p3(2,3);

    p1.display();
    p2.display();
    p3.display();

    //Punto p4 = p2 + p3; paso por valor o referencia
    //p4.display();

    Punto p5 = p2 + &p3;
    p5.display();

    return 0;
}