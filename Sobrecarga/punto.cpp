#include <iostream>

#include "punto.h"

using namespace std;

void Punto::display(){
    cout << "(" << x << " , " << y << ")" << endl;
}

Punto::Punto(){
    x = 0;
    y = 0;
}

Punto::Punto(int a, int b){
    x = a;
    y = b;
}

Punto Punto::operator + (Punto *p){
    int xf = x + p->x;
    int yf = y + p->y;
    Punto res(xf,yf);
    return res;
}

Punto Punto::operator + (Punto &p){
    int xf = x + p.x;
    int yf = y + p.y;
    Punto res(xf,yf);
    return res;
}

Punto Punto::operator + (Punto p){
    int xf = x + p.x;
    int yf = y + p.y;
    Punto res(xf,yf);
    return res;
}