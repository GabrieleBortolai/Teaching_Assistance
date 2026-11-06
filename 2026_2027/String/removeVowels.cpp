#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isItVowel(string st){

    vector<char> vowels = {'A', 'E', 'I', 'O', 'U'};
    vector<int> positions;

    for(int i = 0; i < 5; i++){
        vowels.push_back(vowels[i] + 32);
    }
    
    for(auto i = vowels.rbegin(); i != pos.rend(); ++i){
        positions.push_back(ricerca(st, *i));
    }

    return true;
}

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

    isItVowel(st);


    return 0;
}