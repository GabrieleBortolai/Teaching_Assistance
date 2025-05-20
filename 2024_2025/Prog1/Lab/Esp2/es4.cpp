#include <iostream>
#include <cmath>

using namespace std;

int main (){

    double r, h;

    cout<<"Inserire il raggio e l'atezza del cono"<<endl;
    cin>>r>>h;

    if (r >= 0 && h >=0){
        double a = 0, Ab = 0, Sl = 0, Stot = 0, V = 0;
        
        a = sqrt(r * r + h * h);

        Ab = M_PI * r * r;
        Sl = M_PI * r * a;
        V = (Ab * h) / 3;

        cout<<"L'area do base vale: "<<Ab<<endl;
        cout<<"La superficie laterale vale: "<<Sl<<endl;
        cout<<"La sueperficie totale vale: "<<Ab + Sl<<endl;
        cout<<"Il volume vale: "<<V<<endl;
    }

    else{
        cout<<"Inserire valori positivi"<<endl;
    }

    return 0;
}