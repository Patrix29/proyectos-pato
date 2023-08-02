#include <iostream>
using namespace std;
int num = 0;
bool flag = true;
int main (){
cout<<"introduce numero "<<endl;
cin>>num;
    if(num<2){
        cout<<"invalido"<<endl;
    }
    else{
        for(int i=2; i<=(num/2); i++){
            if (num%i==0){
                cout<<"tu numero no es primo"<<endl;
                flag = false;
                break;
                }
            }   
        }
        if (flag == true){
            cout<<"tu numero es primo"<<endl;
        }
    }
    
    