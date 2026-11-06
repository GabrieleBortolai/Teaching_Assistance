#include <iostream>
#include <string>

using namespace std;

int main(){

    string st;

    getline(cin, st);

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

    if(isNumber) cout << "st e' un numero positivo" << endl;
    else cout << "st non e' un numero positivo" << endl;




    return 0;
}