#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include <string>


class Jugador {

        string nombre;
        char simbolo;

    public:
        void setNombre(string nombre);
        void setSimbolo(char d);
        string getNombre();
        char getSimbolo();

};

#endif