#ifndef CASILLA_H
#define CASILLA_H

class Casilla {

        int posicion;
        char dato;

    public:
        bool ocupado();
        void setData(char d);
        char getData();

};

#endif