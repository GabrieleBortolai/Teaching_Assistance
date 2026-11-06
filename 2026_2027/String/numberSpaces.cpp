#include <iostream>
#include <string>

using namespace std;

int main(){

    string st;

    getline(cin, st);

    int count=0;

    for(int i=0; i<st.length(); i++){

        if(st[i] == ' ') count++;
    }

    cout<<"spazi bianchi: "<< count << endl;







    return 0;
}