#include <iostream>
#include <string>
#include "impresora.h"
#include "miexcepcion.h"

Impresora::Impresora()
{
}
Impresora::Impresora(string n, int h)
{
    nombre = n;
    hojas = h;
}

void Impresora::imprimir(string txt)
{
    int hojasUsadas = txt.length() / 10;

    if ((hojas - hojasUsadas) <= 0){
        //throw(911);
        //string mensaje = "Faltan hojas";
        //throw(mensaje);
        //throw("Faltan hojas");

        MiExcepcion exc("Faltan hojas",abs(hojas - hojasUsadas));
        throw(exc);
    }

    hojas -= hojasUsadas;
    cout << "Soy la impresora " << nombre << " y estoy imprimiendo en " << hojasUsadas << " hojas." << endl;
    cout << "Quedan " << hojas << " hojas." << endl;
}
void Impresora::agregarHojas(int n)
{
    hojas += n;
}