#include <iostream>
#include <string>
#include "fun.h"

using namespace std;

string converter(int);

int main(){

    int m = read_check("Inserire il mese");

    cout<<converter(m)<<endl;

    return 0;
}

string converter(int mounth){

    string mese;

        switch(mounth){

            case 1: mese = "Gennaio";
            break;

            case 2: mese = "Febbraio";
            break;

            case 3: mese = "Marzo";
            break;

            case 4: mese = "Aprile";
            break;

            case 5: mese = "Maggio";
            break;

            case 6: mese = "Giugno";
            break;

            case 7: mese = "Luglio";
            break;

            case 8: mese = "Agosto";
            break;

            case 9: mese = "Settembre";
            break;

            case 10: mese = "Ottobre";
            break;

            case 11: mese = "Novembre";
            break;

            case 12: mese = "Dicembre";
            break;
            
            default: mese = "Mese inesistente";
        }

    return mese;

}