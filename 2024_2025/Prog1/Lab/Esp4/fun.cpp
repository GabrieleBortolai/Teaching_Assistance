#include <iostream>

using namespace std;

double read(string testo){

    double a;

    cout<<testo<<endl;
    cin>>a;

    if(!cin){

        cerr<<"Valore non ammesso"<<endl;
        exit(1);
    }

    return a;
}

double read_check(string testo){

    double a;

    cout<<testo<<endl;
    cin>>a;

    if(!cin){

        cerr<<"Valore non ammesso"<<endl;
        exit(1);
    }

    if(a<0){

        cerr<<"Valore negativo, inserire un valore positivo"<<endl;
        cin>>a;
    }

    return a;
}