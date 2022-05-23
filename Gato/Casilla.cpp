#include "casilla.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::cin;

bool Casilla::ocupado() {
    
    if(dato == 'x' || dato == 'o'){ //Poner espacio para referirse que esta vacio  
        return true;
    }
    else {
        return false;
    }
}

//métodos
void Casilla::setData(char d) {
    dato = d;
}

char Casilla::getData() {
    return dato;
}