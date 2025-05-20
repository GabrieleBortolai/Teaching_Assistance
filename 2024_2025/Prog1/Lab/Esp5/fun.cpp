#include <iostream>
#include <cmath>

using namespace std;

double read(string testo){

    double a;

    do{

        if(!cin){
            cerr<<"Valore non ammesso, riprovare"<<endl;
            cin.clear();
            cin.ignore(255,'\n');
        }

        cout<<testo<<endl;
        cin>>a;
    } while(!cin);

    return a;
}

