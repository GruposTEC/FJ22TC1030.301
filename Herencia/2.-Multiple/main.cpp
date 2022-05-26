#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class D{
    public:
    int x;
    void imprimir(){
        cout << "Imprimiendo desde clase D" << endl;
    }
};

class A: virtual public D{
    public:
    void print(){
        cout << "Imprimiendo desde clase A" << endl;
    }
};
    
class B: public virtual D{
    public:
    void print(){
        cout << "Imprimiendo desde clase B" << endl;
    }
};

class C: public A, public B {   
};

class Ave{
    private:
        string Nombre; 
    public:
        void setName(string N){
            Nombre = N;
        }
        void vuela(){
            cout << "Soy un ave y vuelo" << endl;
        }
};

class Paloma: public Ave{

};

class Pinguino: public Ave{
    public:
    Pinguino(){
        Nombre = "Sin nombre";
    }
    Pinguino(string N){
        Nombre = N;
    }
    Pinguino *ap = NULL;
    string Nombre;
    void nada(){
        cout << "Soy " << Nombre << " pero ademas nado (y no vuelo)" << endl;
    }
    void vuela(){
        cout << "Soy " << Nombre << " pero no vuelo" << endl;
    }
};

int main(){
    Paloma pal;
    Pinguino pin("Pinguino Cristian");
    Pinguino pin2("Pinguino Alberto");
    
    pin.ap = &pin2;
    
    Pinguino *apuntador = &pin;
    apuntador->vuela();
    apuntador = apuntador->ap;
    apuntador->vuela();
    
    /*cout << "Paloma: " << endl;
    pal.vuela();
    cout << "Pinguino: " << endl;
    pin.nada();
    pin.vuela();

    Pinguino* ap = &pin;

    cout << ap << endl;
    ap->nada();

    ap = &pin2;
    cout << ap << endl;
    ap->vuela();

    Pinguino &ref = pin;
    //cout << ref << endl; no se puede
    cout << "En referencia" << endl;
    ref.vuela();

    Pinguino &ref2 = pin2;*/

    cout << "Me gustas eli :))" << endl;
    cout << "Gracias :))" << endl;
    return 0;


}  