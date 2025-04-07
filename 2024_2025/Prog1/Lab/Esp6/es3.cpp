#include <iostream>

using namespace std;

bool Primo(int);

int main(){

    const int num = 20;
    int v[num];

    int i = 0, j = 2;

    while(i < num){

        if(Primo(j)){

            v[i] = j;
            i++;
        }

        j++;
         
    }

    for(int i = 0; i<num; i++){
        cout<<v[i]<<endl;
    }

    int numero;
    do {
        cout << "Inserisci un numero intero positivo minore di 70: ";
        cin >> numero;
    } while (numero <= 0 || numero >= 70);

    // Trova i fattori primi
    cout << "Fattori primi di " << numero << ": ";
    for (int k = 0; k < num && numero > 1; k++) {
        while (numero % v[k] == 0) {
            cout << v[k] << " ";
            numero /= v[k];
        }
    }

    cout << endl;

    return 0;
}

bool Primo(int val){
    
    for(int divisore = 2; divisore <= (val/2); divisore++){
        
        if((val%divisore) == 0) return false;
    }

    return true;
}