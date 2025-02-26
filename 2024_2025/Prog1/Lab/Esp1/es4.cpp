#include <iostream>
#include <cmath>

using namespace std;

int main(){
   
    double r, h, a;
    double Ab = 0, Sl = 0, Stot = 0, V = 0;

    cout<<"Inserire il raggio e l'altezza di un cono"<<endl;
    cin>>r;
    cin>>h;

    a = sqrt(r * r + h * h);

    Ab = M_PI * r * r;
    Sl = M_PI * r * a;
    Stot = Ab + Sl;
    V = (Ab * h) / 3;
    
    cout<<"L'area di base vale: "<<Ab<<endl;
    cout<<"La superficie laterale vale: "<<Sl<<endl;
    cout<<"La superficie totale: "<<Stot<<endl;
    cout<<"Il volume vale: "<<V<<endl;

    return 0;
}

