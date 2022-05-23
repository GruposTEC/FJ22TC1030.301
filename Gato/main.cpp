#include <iostream>
#include "casilla.h"

using namespace std;

int main(){
        
    Casilla ejemplo1;
    ejemplo1.setData('x');
    cout << ejemplo1.ocupado() << endl;
    ejemplo1.setData('o');
    cout << ejemplo1.ocupado() << endl;

    
}