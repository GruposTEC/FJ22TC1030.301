//    MODOS DE HERENCIA
//1.- public (visible a cualqiuera)
//2.- protected (visible a la clase base y sus subclases solamente) 
//3.- private (visible solo a la clase base)

//---------------------------------------------------------------
//  CLASE BASE | CLASE DERIVADA  CLASE DERIVADA  CLASE DERIVADA |
//---------------------------------------------------------------
//             |  MODO public    MODO protected  MODO  private  |    <- Modos de herencia
//---------------------------------------------------------------
//  public     |    public         protected      private       |
//  protected  |    protected      protected      private       |
//  private    |    No heredado    No heredado    No heredado   |
// -------------------------------------------------------------

#include <iostream>
using std::cout;
using std::endl;

class Base 
{
public:
    int &x = y;
    Base() {
        cout << "Constructor de la clase Base" << endl;
    }

    Base(int a,int b,int c) {
        x = a;
        y = b;
        z = c;
    }

    ~Base() {
        cout << "Destructor de la clase Base" << endl;
    }

    void printPublico()
    {
        cout << "print de la clase Base" << endl;
    }
    

private:
    int y = 100;

    void printPrivado()
    {
        cout << "print método privado" << endl;
    }

protected:
    int z;

    void printProtegido()
    
    {
        cout << "print método protegido" << endl;
    }

}; 

class Derivada: public Base
{
    public: 
    int w;
    Derivada(){
        cout << "Constructor de la clase Derivada" << endl;
    }
    Derivada(int a, int b, int c, int d):Base(a,b,c)
    {
        w = d;
        //x = a;
        //y = b; inaccesible
        //z = c;
    }
    ~Derivada(){
        cout << "Destructor de la clase Derivada" << endl;
    }

    void printPublico(){
        //printPublico();
        //printProtegido();
        //printPrivado();
        cout << "Imprimiendo desde el print publico de la clase derivada" << endl;
        cout << x << endl;
    }
    private:
    protected:
};

int main() {

    Derivada objeto;

    objeto.printPublico();
    objeto.Base::printPublico();
    //objeto.printPrivado();
    //objeto.printProtegido();

    return 0;
} 