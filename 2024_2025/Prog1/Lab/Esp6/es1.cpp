#include <iostream>

using namespace std;

int main(){

    const int num = 5;
    double T = 4;

    double v[num];

    for(int i = 0; i<num; i++){

        cin>>v[i];
    }

    for(int i = 0; i<num; i++){

        if(v[i] > T) cout<<v[i]<<endl;
    }






    return 0;
}