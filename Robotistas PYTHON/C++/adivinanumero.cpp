#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
using namespace std;
int numero = 0;
int numeroU = 0;
int vidas = 3;  

int main (){
    srand(time(NULL));
    numero = 1 + rand() % (11-1);

    while (numeroU != numero && vidas>0){
        cout<<"ingrese numero del 1 al 10"<<endl;
        cin>>numeroU;
        vidas--;
        if (numero<numeroU){
            cout<<"el numero que buscas es menor ";
        }
        if (numero>numeroU){
            cout<<"el numero que buscas es mayor ";
        }
    }
    if (numeroU == numero) {
        cout<<"correcto"<<endl;
    }
    else if (vidas == 0){
        cout<<"perdiste"<<endl;
        cout<<"el numero era "<<numero<<endl;
        }
}
