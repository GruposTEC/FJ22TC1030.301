#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class EnvioSuperior{ // Es una interface 
    public: 
    virtual double calculaCosto() = 0;
};

class Envio{
    double x = 10; 
    public: 
    virtual double calculaCosto() = 0;
}; 
class Paquete: public Envio, public EnvioSuperior {
    double y = 11;

public:
    double calculaCosto(){
        cout << "Calcula costo en clase Paquete"<<endl;
    return y;
    } 
    int costo(){
        cout<<"Este es el costo "<<endl; 
        return 0; 
    }
};
class Holograma: public Envio {
    double z = 10; 
    public: 
    double calculaCosto(){
        cout << "Calcula costo en clase Holograma" << endl;
       // Envio::calculaCosto();

    return z;
    }

};

class Sobre: public Envio {
    double z = 10; 
    public: 
    double calculaCosto(){
        cout << "Calcula costo en clase Sobre" << endl;
       // Envio::calculaCosto();

    return z;
    }

};

int main(){
    //Envio obj;
    Paquete obj1; 
    Sobre obj2;
    Holograma obj3; 
    // obj.calculaCosto();
    //obj1.calculaCosto(); 
    //obj1.costo();
    //obj2.calculaCosto(); 
    Envio *en; 
    en = &obj1; 
    en -> calculaCosto(); 
    en = &obj2; 
    en -> calculaCosto(); 
    en = &obj3; 
    en -> calculaCosto(); 
    


}  