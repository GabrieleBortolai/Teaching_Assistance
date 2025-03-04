#include <iostream>
#include <cmath>

using namespace std;

float Delta(float, float, float);
bool Test(float, float, float);
float Reader(string);

int main(){

    float a = Reader("Inserire a");
    float b = Reader("Inserire b");
    float c = Reader("Inserire c");

    if(Test(a, b, c)){
    
        float x1 = (-b + Delta(a, b, c))/(2 * a);
        float x2 = (-b - Delta(a, b, c))/(2 * a);

        cout<<"La prima soluzione vale: "<<x1<<endl;
        cout<<"La seconda soluzione vale: "<<x2<<endl;
    }

    return 0;
}

float Reader(string title){
    float a;

    cout<<title<<endl;
    cin>>a;

    if(!cin){
        cerr<<"Inserire un numero"<<endl;
        cin>>a;
    }

    return a;
}

bool Test(float a, float b, float c){

    if(pow(b, 2) - 4 * a * c >= 0){

        return true;
    } else {
        cerr<<"L'equazione non ammette soluzioni reali"<<endl;
        return false;
    }
}

float Delta(float a, float b, float c){
    return sqrt(pow(b,2) - 4 * a * c);
}