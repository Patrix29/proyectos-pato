#include <iostream>
using namespace std;
long num = 0, num2 =0, numm = 0, nume = 0;
int main (){
    cout<<"ingresa primer numero"<<endl;
    cin>>num;
    cout<<"ingresa segundo numero"<<endl;
    cin>>num2;
    if (num > num2){
        numm = num;
        nume = num2;
    }
    else {
        numm = num2;
        nume = num;
    }
    if (numm % nume == 0){
        cout<<numm<<" es multilpo de "<<nume;
    }
    else 
        cout<<numm<<" no es multilpo de "<<nume;
}
