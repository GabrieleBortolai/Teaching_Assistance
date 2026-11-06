#include <iostream>
#include <string>

using namespace std;

bool palindroma(string st){
    bool pal; 

    for(int i = 0; i < st.length(); i++){

        if(st[i] == st[st.length() - 1 - i]) pal = true;
        else pal = false;

    }

    return pal;
}

int main(){
    string st;

    getline(cin, st);

    if(palindroma(st)) cout << "palindroma" << endl;
    else cout << "non lo e'" << endl;


    return 0;
}