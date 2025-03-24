#include <iostream>
#include "fun.h"

using namespace std;

bool Primo(int);
void Printer(int);

int main(){

    int num = int(read("inserire il massimo"));

    Printer(num);

    return 0;
}

bool Primo(int val){
    
    for(int divisore = 2; divisore <= (val/2); divisore++){
        
        if((val%divisore) == 0) return false;
    }

    return true;
}

void Printer(int val){
    
    cout<<"I primi numeri primi minori sono:"<<endl;
    for(int i=1; i<=val; i++){
        
        if(Primo(i)) cout<<i<<endl;
    }
}
