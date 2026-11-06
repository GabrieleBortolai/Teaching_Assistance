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

int main(){

    char c = 'r';
    string st;
    vector<int> pos;

    getline(cin, st);

    pos = ricerca(st, c);

    if(pos.size() == 0) cout << "nessuna corrispondenza" << endl;
    else{
        cout << "il carattere c: " << c << " e' ripetuto " << pos.size() << " volte in: ";
        for(int i = 0; i < pos.size(); i++){
            cout << pos[i] << " ";
        }
    }
    cout << endl;
    




    return 0;
}