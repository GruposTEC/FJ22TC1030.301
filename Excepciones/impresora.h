#ifndef IMPRESORA_H
#define IMPRESORA_H

#include <string>

using namespace std;

class Impresora
{
private:
    string nombre;
    int hojas;

public:
    Impresora();
    Impresora(string n, int h);

    void imprimir(string txt);
    void agregarHojas(int n);
};

#endif