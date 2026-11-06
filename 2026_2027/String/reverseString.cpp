#include <iostream>
#include <string>

using namespace std;

void reverseString(string& st){

    for(int i = 0; i < st.length() / 2; i++){
        char temp = st[i];
        st[i] = st[st.length() - 1 - i];
        st[st.length() -1 - i] = temp;
    }
}

void SwapReverseString(string& st){

    for(int i = 0; i < st.length() / 2; i++){
        
        swap(st[i], st[st.length() - 1 - i]);

    }
}


int main(){

    string st;

    getline(cin, st);
    reverseString(st);

    cout << "string al contrario: " << st << endl;





    return 0;
}