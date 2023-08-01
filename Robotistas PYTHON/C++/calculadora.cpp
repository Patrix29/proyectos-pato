#include <iostream>
using namespace std;

int num1 = 0, num2 = 0, decision = 0;
int main (){
    cout<<"inserta el primer numero"<<endl;
    cin>>num1;
    cout<<"inserta el segundo numero"<<endl;
    cin>>num2;
    cout<<"presiona 1 para suma o 2 para resta, 3 para multiplicacion, 4 para divicion, 5 para porcentaje"<<endl;
    cin>>decision;

    if (decision ==1){
        int suma = (num1 + num2);
        cout<< suma <<endl;
    }else if(decision == 2){
        int resta =  (num1 - num2);
        cout<< resta <<endl;
    }else if(decision == 3){
        int multiplicacion =  (num1 * num2);
        cout<< multiplicacion <<endl;
    }else if(decision == 4){
        double divicion =  (num1 / num2);
        cout<< divicion <<endl;
    }else if(decision == 5){
        double porcentaje =  (num1 % num2);
        cout<< porcentaje <<endl;
    }else {
        cout<<"introduzca un numero valido"<<endl;
    }
}