#include <iostream>
using namespace std;
long num = 0, num2 =1;
int main (){
    cout<<"introduce numero ";
    cin>>num;
    for (int i = 1; i<=num; i++){
        num2 = i*num2;
    }
    cout<<num2<<" es el factor de "<<num<<endl;
}