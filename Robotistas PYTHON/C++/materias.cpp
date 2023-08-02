#include <iostream>
#include <vector>
using namespace std;

int calif = 0;

int main(){
vector <string> materiasV {"calculo","aleman","historia","quimica","tutoreo","español","creatividad"};
vector <int> cali;
vector <string> materiaR;
vector <string> materiaP;

    for (int i=0;i<materiasV.size();i++){
        cout<<"cuanto sacaste en "<<materiasV[i]<<endl;
        cin>>calif;
        cali.push_back(calif);

        if(calif<70){
            materiaR.push_back(materiasV[i]);
        }

    }
    for (int i = 0; i <materiasV.size ();i++){
        for (int j = 0; j <materiaR.size ();j++){
            if(materiasV[i] == materiaR[j]){
                //materiasV.erase(materiaR.begin()+j);
                materiaP.push_back(materiaR[j]);
            }
        }
    }
    for (int i=0;i<materiaP.size();i++){
        //cout<<"sacaste "<<cali[i]<<" en "<<materiasV[i]<<endl;
        cout<<"tienes que repetir "<<materiaP[i]<<endl;

    }
}