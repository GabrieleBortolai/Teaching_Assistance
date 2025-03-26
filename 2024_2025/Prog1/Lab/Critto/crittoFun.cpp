#include <iostream>
#include <string>

using namespace std;

int find_min(char a){
    int min;

    if(a >= 'a' && a <= 'z') min = 'a';
    else if (a >= 'A' && a<= 'Z') min = 'A';
    
    return min;
}

int shift(char a, int s){

    return a + s;
}

char critta(char a, int key){
    
    // cout<<"output"<<shift((shift(a, - find_min(a)) + (key % 25)) % 26, find_min(a))<<endl;

    return shift((shift(a, - find_min(a)) + (key % 26)) % 26, find_min(a));

}

// char critta(char a, int key){
    
//     // cout<<"output"<<(a + (key % 25)) % 26<<endl;

//     return (a + (key % 26)) % 26;

// }


string critta_testo(string testo, int key){
    
    string s = "";
    for(int i = 0; i < testo.length(); i++){

        s += critta(testo[i], key);
    }

    return s;
}