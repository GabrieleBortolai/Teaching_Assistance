#include <iostream>
#include "fun.h"

using namespace std;

void TavolaPeriodica(int);

int main(){

    double val = read("inserire la taglia");

    cout<<"La tavola periodica di taglia "<<int(val)<<endl;
    TavolaPeriodica(int(val));

    return 0;
}

void TavolaPeriodica(int val){

    for(int i=1; i<val; i++){
        for(int j=1; j<val; j++){
            cout<<i*j<<" ";
        }
        cout<<endl;
    }

}