#include <iostream>
#include <string>

using namespace std;

int main(){

    string st, st_new = "";

    getline(cin, st);

    for(int i = 0; i < st.length(); i++){

        if(st[i] != ' ') st_new += st[i];
    }

    cout << st_new << endl;



    return 0;
}