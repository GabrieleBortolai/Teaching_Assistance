#include <iostream>
#include <string>

using namespace std;

void numberToString(string& st, int num){

    for(int i = 0; i < num; i++){
        st += i + '0';
    }
}

int main(){

    int num=100;
    string st = "";
    numberToString(st, num);

    cout << st << endl;

    return 0;
}