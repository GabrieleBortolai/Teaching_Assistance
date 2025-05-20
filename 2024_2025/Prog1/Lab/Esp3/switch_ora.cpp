#include <iostream>


using namespace std;


int main(){

    int ora;
    string ora_lettere;
    
    cin >> ora;

    switch(ora%12){
        case 0:
        if(ora == 12){ora_lettere = "mezzo giorno";}
        else if(ora == 0){ora_lettere = "mezzanotte";}
        break;

        case 1:
        ora_lettere = "una";
        break;

        case 2:
        ora_lettere = "due";
        break;

        case 3:
        ora_lettere = "tre";
        break;

        case 4:
        ora_lettere = "quattro";
        break;

        case 5:
        ora_lettere = "cinque";
        break;

        case 6:
        ora_lettere = "sei";
        break;

        case 7:
        ora_lettere = "sette";
        break;

        case 8:
        ora_lettere = "otto";
        break;

        case 9:
        ora_lettere = "nove";
        break;

        case 10:
        ora_lettere = "dieci";
        break;

        case 11:
        ora_lettere = "undici";
        break;
    }

    switch(ora%12){
        case 0:
        if(ora == 12){cout<<ora_lettere;}
        else if(ora == 0){cout<<ora_lettere;}
        break;

        default:
        if (ora < 12){cout<<ora_lettere<<" di mattina";}
        else {cout<<ora_lettere<<" del pomeriggio";}
        break;

    }

    return 0;
}