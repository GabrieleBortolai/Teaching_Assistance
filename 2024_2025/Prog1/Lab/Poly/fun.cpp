#include <iostream>
#include <string>

using namespace std;

int read(string testo){

    int a;
    
    do{
        if(!cin || a < 2){

            cerr<<"Valore non ammesso, riprovare"<<endl;
            cin.clear();
            cin.ignore(255, '\n');
        }

        cout<<testo<<endl;
        cin>>a;

    } while(!cin || a < 2);

    return a;
}

int read_num_val(string testo){

    int a;
    
    do{
        if(!cin || a < 0){

            cerr<<"Valore non ammesso, riprovare"<<endl;
            cin.clear();
            cin.ignore(255, '\n');
        }

        cout<<testo<<endl;
        cin>>a;

    } while(!cin || a < 0);

    return a;
}


double read_coeff(string testo, int val){

    double a;
    
    do{
        if(!cin){

            cerr<<"Valore non ammesso, riprovare"<<endl;
            cin.clear();
            cin.ignore(255, '\n');
        }

        cout<< testo<< val<<endl;
        cin>>a;

    } while(!cin);

    return a;
}

void unmount_pointer(double *v){

    if(v != NULL){
        delete[] v;
    }

    v = NULL;
}
