#include <iostream>
#include <vector>
using namespace std;+

int list [5] = {1,2,3,4,5};
vector <string> nombres (5);
vector <string> nombres {"Jero","Memo","Montse"};

int main (){

    cout<< nombres.size() <<endl;
    cout<< nombres.at(3) <<endl;
    nombres.pushback("Marijo"); 
    cout<< nombres.size() <<endl;
    nombres.pop_back(); 
    cout<< nombres.size() <<endl;
}


