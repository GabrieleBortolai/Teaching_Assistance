#include <iostream>


using namespace std;

int main(){

    double b, h;

    cout<<"Inserire base e altezza"<<endl;
    cin>>b>>h;

    if (b >= 0 && h >= 0){

        cout<<"Il perimetro vale: "<<2 * (b + h)<<" L'area vale: "<<b * h<<endl;
    }

    else{

        cout<<"I lati devono essere positivi"<<endl;

    }

    return 0;
}
