#include <iostream>
#include "fun.h"

using namespace std;

int Fattorial(int);

int main(){

    int n = int(read_check("Inserire il valore"));
    
    cout<<"il fattoriale di "<<n<<" vale "<<Fattorial(n)<<endl;

    return 0;
}

int Fattorial(int n){
    int val;

    if(n){

        for(int i=1; i<=n; i++){

            val = val * i;
        }

        return val;

    } else {

        return 1;
    }
}