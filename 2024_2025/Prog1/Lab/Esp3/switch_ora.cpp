#include <iostream>


using namespace std;


int main(){

    int ora;
    string ora_lettere;
    
    cin >> ora;

    switch(ora%12){
        case 0:
        if(ora == 12){ora_lettere = "dodoci";}
        else if(ora == 0){ora_lettere = "mezzanotte";}
        break;

        case 1:
        if(ora == 1){ora_lettere = "una";}
        else if(ora == 13){ora_lettere = "tredici";}
        break;

        case 2:
        if(ora == 2){ora_lettere = "due";}
        else if(ora == 14){ora_lettere = "quattordici";}
        break;

        case 3:
        if(ora == 3){ora_lettere = "tre";}
        else if(ora == 15){ora_lettere = "quindici";}
        break;

        case 4:
        if(ora == 4){ora_lettere = "quattro";}
        else if(ora == 4){ora_lettere = "sedici";}
        break;

        case 5:
        if(ora == 5){ora_lettere = "conque";}
        else if(ora == 17){ora_lettere = "quindici";}
        break;

        case 6:
        if(ora == 6){ora_lettere = "sei";}
        else if(ora == 18){ora_lettere = "diciotto";}
        break;

        case 7:
        if(ora == 7){ora_lettere = "sette";}
        else if(ora == 19){ora_lettere = "dicciannove";}
        break;

        case 8:
        if(ora == 8){ora_lettere = "otto";}
        else if(ora == 20){ora_lettere = "venti";}
        break;

        case 9:
        if(ora == 9){ora_lettere = "nove";}
        else if(ora == 21){ora_lettere = "ventuno";}
        break;

        case 10:
        if(ora == 10){ora_lettere = "dieci";}
        else if(ora == 22){ora_lettere = "ventidue";}
        break;

        case 11:
        if(ora == 11){ora_lettere = "undici";}
        else if(ora == 23){ora_lettere = "ventitre";}
        break;
    }

    switch(ora%12){
        case 0:
        if(ora == 12){cout<<ora_lettere;}
        else if(ora == 0){cout<<ora_lettere;}
        break;

        case 1:
        if (ora == 1){cout<<ora_lettere<<"mattina";}
        else if (ora == 13){cout<<ora_lettere<<"pomeriggio";}
        break;

        case 2:
        if (ora == 2){cout<<ora_lettere<<"mattina";}
        else if (ora == 14){cout<<ora_lettere<<"pomeriggio";}
        break;

        case 3:
        if (ora == 3){cout<<ora_lettere<<"mattina";}
        else if (ora == 15){cout<<ora_lettere<<"pomeriggio";}
        break;

        case 4:
        if (ora == 4){cout<<ora_lettere<<"mattina";}
        else if (ora == 16){cout<<ora_lettere<<"pomeriggio";}
        break;

        case 5:
        if (ora == 5){cout<<ora_lettere<<"mattina";}
        else if (ora == 17){cout<<ora_lettere<<"pomeriggio";}
        break;

        case 6:
        if (ora == 6){cout<<ora_lettere<<"mattina";}
        else if (ora == 18){cout<<ora_lettere<<"pomeriggio";}
        break;

        case 7:
        if (ora == 7){cout<<ora_lettere<<"mattina";}
        else if (ora == 19){cout<<ora_lettere<<"pomeriggio";}
        break;

        case 8:
        if (ora == 8){cout<<ora_lettere<<"mattina";}
        else if (ora == 20){cout<<ora_lettere<<"pomeriggio";}
        break;

        case 9:
        if (ora == 9){cout<<ora_lettere<<"mattina";}
        else if (ora == 21){cout<<ora_lettere<<"pomeriggio";}
        break;

        case 10:
        if (ora == 10){cout<<ora_lettere<<"mattina";}
        else if (ora == 22){cout<<ora_lettere<<"pomeriggio";}
        break;

        case 11:
        if (ora == 11){cout<<ora_lettere<<"mattina";}
        else if (ora == 23){cout<<ora_lettere<<"pomeriggio";}
        break;


    }

    return 0;
}