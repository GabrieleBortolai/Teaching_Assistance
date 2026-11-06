#include <iostream>
#include <string>
#include <cmath>

using namespace std;


bool isValidPositiveNumber(string st){
    bool isNumber=true;

    if(st.length() != 0){
        if(st[0] != '0'){

            for(int i = 0; i < st.length(); i++){
                if(st[i] < '0' || st[i] > '9') isNumber = false;
            }
        }
        else isNumber = false;
    }
    else isNumber = false;

    return isNumber;
}

int stringToNumber(string st){
    int num = 0;

    for(int i = 0; i < st.length(); i++){

        num += (st[i] - '0') * pow(10, st.length() - 1 - i);
    }

    return num;
}

int main(){

    string st;
    bool isNumber;
    int num;

    do{
        getline(cin, st);
        isNumber = isValidPositiveNumber(st);
    }
    while(!isNumber);

    num = stringToNumber(st);
    cout << "il numero e': " << num << endl;



    return 0;
}