#include <iostream>

using namespace std;

char last_letter(){

    char last, c = 'a';

    cout << "Inerire una lettera minuscola" << endl;
    
    do{
        cin >> last;
        if (last > c) c = last;
    }
    while((last >= 'a' && last <= 'z'));

    
    return c;
}

int main(){

    char last = last_letter();
    cout << "last " << last << endl;




    return 0;
}