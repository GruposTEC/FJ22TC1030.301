#ifndef MIEXCEPCION_H
#define MIEXCEPCION_H

#include <exception>
#include <string>

using std::exception;
using std::string;

class MiExcepcion: public exception
{
private:
    string texto;
    int hojas;
public:
    MiExcepcion();
    MiExcepcion(string txt, int h);

    void display() const;
};

#endif