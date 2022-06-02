#ifndef PUNTO_H
#define PUNTO_H

class Punto{
private:
    int x;
    int y;
public:
    void display();
    Punto();
    Punto(int a, int b);
    Punto operator + (Punto *p); // paso por apuntador
    //Punto operator + (Punto &p); // paso por referencia
};

#endif