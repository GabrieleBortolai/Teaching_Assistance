#include <iostream>
#include <cmath>

using namespace std;

bool test(float);
float det(float, float, float, float);


int main(){

    float a00, a01, a02, a10, a11, a12;

    cout<<"i coeff vengono letti dal file coef"<<endl;
    cin>>a00>>a01>>a02>>a10>>a11>>a12;

    if(test(det(a00, a01, a10, a11))){

        float x = det(a02, a01, a12, a11)/det(a00, a01, a10, a11);
        float y = det(a00, a02, a01, a12)/det(a00, a01, a10, a11);

        cout<<"x vale: "<<x<<endl;
        cout<<"y vale: "<<y<<endl;
    }



    return 0;
}

bool test(float delta){
    if(delta > 0 || delta < 0){
        cout<<"Il sistema ha soluzioni"<<endl;
        return true;
    } else {
        cerr<<"determinante nullo no soluzioni"<<endl;
        return false;
    }
}

float det(float a00, float a01, float a10, float a11){
    return a00 * a01 - a01 * a11; 
}