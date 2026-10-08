#include <iostream>
#include "fun.h"

using namespace std;

void Quadrati(int);

int main(){

    double val = read("Inseire il numero");

    cout<<"i primi n quadrati di "<<val<<" sono"<<endl;
    Quadrati(int(val));

    return 0;
}

void Quadrati(int val){

    for(int i=0; i<val; i++){

        cout<<i*i<<endl;
    }
}