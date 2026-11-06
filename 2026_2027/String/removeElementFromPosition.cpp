#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool remove(string& st, int p){

    if(p >= 0 && p < st.length()){
        st.erase(p, 2);
        return true;
    }
    else return false;
}


int main(){

    string st;
    int p = 9;

    getline(cin, st);
    if(remove(st, p)) cout << "la nuova stringa e': " << st << endl;
    else cout << "errore" << endl;





    return 0;
}