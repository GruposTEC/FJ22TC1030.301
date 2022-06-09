#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "tablero.h"

using std::ifstream;
using std::stringstream;
using std::cout;
using std::endl;
using std::string;

Tablero::Tablero()
{


}

void Tablero::leerTablero(){
    ifstream archivo;
    string line;

    archivo.open("datos.txt");

    while (getline(archivo,line))
    {
        stringstream token(line);
        string c1, c2, c3;

        getline(token,c1,',');
        getline(token,c2,',');
        getline(token,c3,',');

        cout << c1 << " " << c2 << " " << c3 << endl;

        //cout << line << endl;
    }

    archivo.close();
}
