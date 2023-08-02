#include <iostream>
using namespace std;
int edad = 0;
double sueldo = 0;

int main (){

    cout<<"ingrese su edad"<<endl;
    cin>>edad;
    if(edad >= 18){
        cout<<"cual es su sueldo?"<<endl;
        cin>>sueldo;
        if(edad >= 18 && sueldo >=15000){
            cout<<"tienes que pagar impuestos"<<endl;
        }
        else{
            cout<<"no tienes que pagar impuestos"<<endl;
        }   
    }else{
        cout<<"no tienes que pagar impuestos"<<endl;
    }
}