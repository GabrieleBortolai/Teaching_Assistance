#include <iostream>
#include <cmath>
#include <typeinfo>
#include <string>
#include "fun.h"

using namespace std;

string string_reader(string);
int converter(string);
string letters_converter(string);

int main(){

    string num = string_reader("Inserire il valore esadecimale");

    cout<<"Il numero convertito vale: ";
    cout<<converter(num)<<endl;

    return 0;
}

string string_reader(string testo){
    string num;

    cout<<testo<<endl;
    cin>>num;

    return num;
}

int converter(string num){
    int val = 0;

    for(int i=0; i<num.length(); i++){

        val += stoi(letters_converter(string(1, num[i]))) * pow(16, num.length() - i - 1);

    }

    return val;
}

string letters_converter(string num){
    
        if(num == "A") return "10";
        if(num == "B") return "11";
        if(num == "C") return "12";
        if(num == "D") return "13";
        if(num == "E") return "14";
        if(num == "F") return "15";
        else return num;

    }