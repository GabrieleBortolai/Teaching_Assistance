#include <iostream>
#include <string>
#include "fun.h"
#include "crittoFun.h"

using namespace std;


int main(){

    string testo = read_str("inserire il testo da criptare");
    
    int key = read("Inserire la chiave");

    cout<<"Testo criptato"<<endl;
    cout<<critta_testo(testo, key)<<endl;

    cout<<"Testo decriptato"<<endl;
    cout<<critta_testo(critta_testo(testo, key), - key)<<endl;
    
    return 0;
}