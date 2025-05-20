#include <iostream>
#include <string>

using namespace std;

string read_str(string testo){

    string a;

    cout<<testo<<endl;
    cin>>a;

    return a;
}

int read(string testo){

    int a;

    cout<<testo<<endl;
    cin>>a;

    if(!cin){
        cout<<"valore non ammesso";
        exit(1);
    }

    return a;
}