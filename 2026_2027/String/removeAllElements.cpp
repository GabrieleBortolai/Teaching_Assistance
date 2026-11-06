#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> ricerca(string st, char c){

    vector<int> pos;

    for(int i = 0; i < st.length(); i++){

        if(st[i] == c) pos.push_back(i);
    }

    return pos;
}

void remove(string& st, char c){

    vector<int> pos = ricerca(st, c);

    for(auto i = pos.rbegin(); i != pos.rend(); ++i){
        st.erase(*i, 1);
    }
}


int main(){

    string st;
    char c = 'r';

    getline(cin, st);

    remove(st, c);
    cout << "string new " << st << endl;



    return 0;
}