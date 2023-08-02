#include <iostream>
#include <math.h>
using namespace std;

long area = 0, vol =0, alt = 0, rad = 0, decision = 0, base = 0;
//funciones
int carea (int radio){
    int areat = 3.14*(radio*radio);
    return areat;
}
int cvol (int radio, int altura){
    int areat = 3.14*(radio*radio)*altura;
    return areat;
    }
int ctriangulo (int baseT, int altura){
    int areaT = (baseT*altura)/2;
    return areaT;
    }
int cCuadrado (int baseT){
    int areaT = (baseT*baseT);
    return areaT;
    }
int crectangulo (int baseT, int altura){
    int areaT = baseT*altura;
    return areaT;
    }

int main (){
    cout<<"escribe 1 para circulo (area),2 para circulo (volumen),3 para triangulo, 4 para cuadrado, 5 para rectangulo"<<endl;
    cin>>decision;
    if (decision == 1){
        cout<<"cual es el radio?"<<endl;
        cin>>rad;
        area = carea (rad);
        cout<<"el area del circulo es de "<<area<<endl;
    }
    else if (decision == 2){
        cout<<"cual es el radio?"<<endl;
        cin>>rad;
        cout<<"cual es la altura?"<<endl;
        cin>>alt;
        vol = cvol (rad, alt);
        cout<<"el volumen del circulo es de "<<vol<<endl;
    }
    else if (decision == 3){
        cout<<"cual es la base?"<<endl;
        cin>>base;
        cout<<"cual es la altura?"<<endl;
        cin>>alt;
        area = ctriangulo (base, alt);
        cout<<"el area del triangulo es de "<<area<<endl;
    
        }
        else if (decision == 4){
        cout<<"cual es la base?"<<endl;
        cin>>base;
        area = cCuadrado (base);
        cout<<"el area del cuadrado es de "<<area<<endl;
    }
        
        else if (decision == 5){
        cout<<"cual es la base?"<<endl;
        cin>>base;
        cout<<"cual es la altura?"<<endl;
        cin>>alt;
        area = crectangulo (base, alt);
        cout<<"el area del rectangulo es de "<<area<<endl;
    
        }
    else{
        cout<<"ingrese valor valido";
    }
}