#include <iostream>
#include <vector>
using namespace std;
int num = 0;
vector <string> list {"a","b","c","d","e","f"};
int main() {
    for (int i = 0; i < list.size(); i +=2){
        cout<<list[i]<<endl;
    }
    for (int i = 1; i < list.size(); i +=2){
        cout<<list[i]<<endl;
    }
    for (int i = list.size()-1; i >= 0; i--){
        cout<<list[i]<<endl;
    }
}