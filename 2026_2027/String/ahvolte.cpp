#include <iostream>
#include <string>

using namespace std;

int main(){

    int num;
    string st = "";

    cout << "inserire num" << endl;
    cin >> num;

    for(int i = 0; i<num; i++){
        st += "AH";
        
    }

    cout << st << endl;




    return 0;
}