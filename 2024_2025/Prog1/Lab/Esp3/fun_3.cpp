#include <iostream>
#include <cmath>

using namespace std;

bool test(float);
float det(float, float, float, float);


int main(){

    float a00, a01, a02, a10, a11, a12;

    cout<<"I coeff vengono letti dal file coef.txt"<<endl;
    cin>>a00>>a01>>a02>>a10>>a11>>a12;

    if(test(det(a00, a01, a10, a11))){

        float x = det(a02, a01, a12, a11)/det(a00, a01, a10, a11);
        float y = det(a00, a02, a01, a12)/det(a00, a01, a10, a11);

        cout<<"x vale: "<<x<<endl;
        cout<<"y vale: "<<y<<endl;
    } else {
        cerr<<"Determinante nullo"<<endl;
        return 1;
    }
    return 0;
}

bool test(float det){
    // if(delta != 0){
    //     cout<<"Il sistema ha soluzioni"<<endl;
    //     return true;
    // } else {
    //     cerr<<"determinante nullo no soluzioni"<<endl;
    //     return false;
    // }

    return det != 0;
}

float det(float a00, float a01, float a10, float a11){
    return a00 * a11 - a01 * a10; 
}