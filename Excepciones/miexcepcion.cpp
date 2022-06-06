#include <iostream>
#include <string>
#include "miexcepcion.h"

using std::string;
using std::cout;
using std::endl;

MiExcepcion::MiExcepcion(){

}
MiExcepcion::MiExcepcion(string txt, int h){
    texto = txt;
    hojas = h;
}

void MiExcepcion::display() const{
    cout << "Error " << texto << ". Faltan " << hojas << " hojas." << endl;
}
