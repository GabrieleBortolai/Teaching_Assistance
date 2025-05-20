#include <iostream>
#include <string>

using namespace std;

bool checker(string);

int main(){

    string k = "otto";

    if(checker(k)){

        cout<<"palindroma"<<endl;

    } else {

        cout<<"non palindroma"<<endl;
    }
    
    return 0;
}

bool checker(string word){

    for(int i=0; i<=word.length() - 1; i++){
        
        if(word[i] != word[word.length() - i - 1]){ 
            
            return false;
        }

    }
    
    return true;
}