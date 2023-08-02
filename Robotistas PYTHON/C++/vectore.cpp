#include <iostream>
#include <vector>
using namespace std;
int num = 0;
int list0 = 0;
int list1 = 0;
vector <int> bin {0,0,1,0,0,0,1,1,0,1};
int main() {
    for(int i = 0; i<bin.size(); i++){
        if(0==bin[i]){
            list0++;
        }
        if(1==bin[i]){
            list1++;
        }
    }
    cout<<"hay "<<list0<<" ceros"<<endl;
    cout<<"hay "<<list1<<" unos";
}