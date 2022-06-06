#include <iostream>
#include <string>
#include "impresora.h"
#include "miexcepcion.h"

using namespace std;

int main(){

    Impresora impresora("HP",20);
    try{
        impresora.imprimir("Angelo Moriondo fue un inventor y empresario italiano, conocido por patentar la máquina de café espresso en 1884.​Angelo Moriondo provenía de una familia empresarial");
        impresora.imprimir("GOOGLE LE DEDICA EL DOODLE DE HOY A ANGELO MORIONDO, EL INVENTOR DE LA MÁQUINA CAFÉ ESPRESSO");
    }
    catch (int const &error){
        cout << "Dentro del catch de enteros" << endl;
        cout << error << endl;
    }
    catch (string const &error){
        cout << "Dentro del catch de strings" << endl;
        cout << error << endl;
    }
    catch (char const* error){
        cout << "Dentro del catch de arreglo de caracteres" << endl;
        cout << error << endl;
    }
    catch (MiExcepcion const &exp){
        cout << "Dentro del catch de objeto" << endl;
        exp.display();
    }
    catch (...){
        cout << "Cacha todo" << endl;
    }

    return 0;
}