#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int read(string testo){

    int a;
    
    do{
        if(!cin){

            cerr<<"Valore non ammesso, riprovare"<<endl;
            cin.clear();
            cin.ignore(255, '\n');
        }

        cout<<testo<<endl;
        cin>>a;

    } while(!cin);

    return a;
}

void check_extremes(int &a, int &b){

    if(a>b){

        cout<<"hai messo gli estremi al contrario, ci penso io"<<endl;
        int temp = a;
        a = b;
        b = temp;
    }
}

void check_numTrap(int &a){

    if(a<0){
        cerr<<"Il numero di trapezi non puó essere negativo, traquillo bello ci penso io"<<endl;
        a = abs(a);
    }
}