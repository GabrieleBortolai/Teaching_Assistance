#include <iostream>


using namespace std;

int main(){

    int a, b, c;

    cout<<"Inserire il valore dei lati del cateto"<<endl;
    cin>>a>>b>>c;

    if(a < b + c && b < a + c && c < b + a){

        double per = 2 * (a + b + c);
        double p = (a + b + c);

        cout<<"Il perimetro vale: "<<per<<endl;
        cout<<"L'area vale: "<<p * (p - a) * (p - b) * (p - c)<<endl;

    }

    else{
        cout<<"Non soddisfa la disuguaglianza triangolare, quindi non é in trinagolo"<<endl;
    }

    return 0;
}