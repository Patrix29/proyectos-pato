#include <iostream>
using namespace std;

int mes = 0, decision = 0;
int main (){
    cout<<"presiona 1 para enero, \n"
    "2 para febrero, 3 para marzo,\n"
    "4 para abril, 5 mayo, 6 junio,\n"
    "7 julio, 8 agosto, 9 septiembre\n"
    "10 octubre, 11 noviembre, 12 diciembre"<<endl;
    cin>>decision;
    
    switch (decision){
    case 1:
        cout<< "nacisite en enero"<<endl;
        break;
    case 2:
        cout<< "nacisite en febrero"<<endl;
        break;
    case 3:
        cout<< "nacisite en marzo"<<endl;
        break;
    case 4:
        cout<< "nacisite en abril"<<endl;
        break;
    case 5:
        cout<< "nacisite en mayo"<<endl;
        break;
    case 6:
        cout<< "nacisite en junio"<<endl;
        break;
    case 7:
        cout<< "nacisite en julio"<<endl;
        break;
    case 8:
        cout<< "nacisite en agosto"<<endl;
        break;
    case 9:
        cout<< "nacisite en septiembre"<<endl;
        break;
    case 10:
        cout<< "nacisite en octubre"<<endl;
        break;
    case 11:
        cout<< "nacisite en noviembre"<<endl;
        break;
    case 12:
        cout<< "nacisite en diciembre"<<endl;
        break;

    default: cout<<"invalido"<<endl;
        break;
    }
}