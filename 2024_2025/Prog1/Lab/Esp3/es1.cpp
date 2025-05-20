#include <iostream>

using namespace std;

int main(){

    int a;

    cin>>a;

    if (!cin){
        cerr<<"errore"; //se non é un numero
        return 1;
    }

    else if(a<=0){
        cerr<<"no"; //se non é positivo
        return 1;
    }

    cout<<a;

    return 0;
}