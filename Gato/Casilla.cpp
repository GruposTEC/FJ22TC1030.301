#include "casilla.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;


Casilla::Casilla()
{
    
}

char Casilla::getSimbolo()
{
    return simbolo;
}

int Casilla::getPosicion()
{
    return posicion;
}
void Casilla::setSimbolo(char sim)
{
    simbolo = sim;
}

void Casilla::setPosicion(int pos)
{
    posicion = pos;
}

bool Casilla::ocupada()
{
    if(simbolo =! ' ')
    {
        return true;
    }

    else
    {
        return false;
    }
}
