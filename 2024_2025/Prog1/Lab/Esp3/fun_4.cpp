// Gabriele Bortolai gabriele.bortolai@edu.unige.it

/*
Sruttura del codice:

i) la funzione isnan(valore) della classe cmath ritorna 0 (true) se valore == NAN altrimenti 1 (flase) 
ii) la funzione read legge il valore in input e controlla se il valore inserito é accettabile (read:string -> R)
iii) La funzione dataXdammiY calcola Y data la retta e un valore di X, ritorna NAN se la retta non esiste (dataXdammiY:R^4 -> R)
iv) La funzione dataYdammiX calcola X data la retta e un valore di Y, ritorna NAN se la retta non esiste (dataYdammiX:R^4 -> R)
v) La funzine puntoXYsuRetta verifica se il punto inserito appartiene alla retta se si ritorna 1 (true) altrimenti 0 (false) (puntoXYsuRetta:R^5 -> [0,1])

Futuri lavori: il controllo se la retta esiste lo si puó fare all'inizio di tutto, l'implementazione di ció é visibile alla fine.
*/

#include <iostream>
#include <cmath>

using namespace std;

float read (string);
double dataXdammiY (float, float, float, float);
double dataYdammiX (float, float, float, float);
bool puntoXYsuRetta (float, float, float, float, float);


int main(){

    float a, b, c, x, y;
    string testo = "inserire i coeff";

    a = read("inserire a");
    b = read("inserire b");
    c = read("inserire c");

    x = read("inserire x");
    y = read("inserire y");

    if(!isnan(dataXdammiY(a, b, c, 0))){

        cout<<"per x=0 la coppia dei punti vale: (0,"<<dataXdammiY(a, b, c, 0)<<")"<<endl;
    } else cerr<<"Il punto non appartiene alla retta"<<endl;

    if(!isnan(dataXdammiY(a, b, c, 0))){

        cout<<"per y=0 la coppia dei punti vale: ("<<dataXdammiY(a, b, c, 0)<<",0)"<<endl;
    } else cerr<<"Il punto non appartiene alla retta"<<endl;



    if (!isnan(dataXdammiY(a, b, c, x)) && !isnan(dataYdammiX(a, b, c, y)) && puntoXYsuRetta(a, b, c, x, y)){

        cout<<"il punto sta sulla retta ax+by+c=0"<<endl;

    } else {
        cerr<<"il punto non sta sulla retta ax+by+c=0"<<endl;        
    }

    x = 0;
    y = 0;

    if (!isnan(dataXdammiY(a, b, c, x)) && !isnan(dataYdammiX(a, b, c, y)) && puntoXYsuRetta(a, b, c, x, y)){

        cout<<"il punto (0,0) sta sulla retta"<<endl;

    } else {
        cerr<<"il punto (0,0) non sta sulla retta"<<endl;
    }

    x = 1;
    y = 1;
    
    if (!isnan(dataXdammiY(a, b, c, x)) && !isnan(dataYdammiX(a, b, c, y)) && puntoXYsuRetta(a, b, c, x, y)){

        cout<<"il punto (1,1) sta sulla retta"<<endl;

    } else {
        cerr<<"il punto (1,1) non sta sulla retta"<<endl;
    }
    
    return 0;
}

float read (string testo){
    
    float a;

    cout<<testo<<endl;
    cin>>a;

    if(!cin){

        cerr<<"inserire un numero"<<endl;
        exit(1);
    } 

    return a;
}

double dataXdammiY(float a, float b, float c, float x){
    
    if (b == 0){
     
        return NAN;

    }  else{

        return -(a/b) * x - (c/b);
    }
    
}

double dataYdammiX(float a, float b, float c, float y){

    if (a == 0){
     
        return NAN;

    }  else{

        return -(b/a) * y - (c/a);
    }
}

bool puntoXYsuRetta (float a, float b, float c, float x, float y){

    return a * x + b * y + c == 0;
}

/*
#include <iostream>
#include <cmath>


using namespace std;

float read (string);
bool LineChecker(float, float, float);
double dataXdammiY (float, float, float, float);
double dataYdammiX (float, float, float, float);
bool puntoXYsuRetta (float, float, float, float, float);


int main(){

    float a, b, c, x, y;
    string testo = "inserire i coeff";

    a = read("inserire a");
    b = read("inserire b");
    c = read("inserire c");

    if(LineChecker(a, b, c)){
        cerr<<"Retta non valida, i coefficienti a e b devono essere non nulli"<<endl;
        return 1;
    } 

    x = read("inserire x");
    y = read("inserire y");

    

    cout<<"per x=0 la coppia dei punti vale: (0,"<<dataXdammiY(a, b, c, 0)<<")"<<endl;
    cout<<"per y=0 la coppia dei punti vale: ("<<dataXdammiY(a, b, c, 0)<<",0)"<<endl;

    if (puntoXYsuRetta(a, b, c, x, y)){

        cout<<"il punto sta sulla retta ax+by+c=0"<<endl;

    } else {
        cerr<<"il punto non sta sulla retta ax+by+c=0"<<endl;

    }

    x = 0;
    y = 0;

    if (puntoXYsuRetta(a, b, c, x, y)){

        cout<<"il punto (0,0) sta sulla retta"<<endl;

    } else {
        cerr<<"il punto (0,0) non sta sulla retta"<<endl;

    }

    x = 1;
    y = 1;
    
    if (puntoXYsuRetta(a, b, c, x, y)){

        cout<<"il punto (1,1) sta sulla retta"<<endl;

    } else {
        cerr<<"il punto (1,1) non sta sulla retta"<<endl;

    }
    
    return 0;
}

float read (string testo){
    
    float a;

    cout<<testo<<endl;
    cin>>a;

    if(!cin){

        cerr<<"inserire un numero"<<endl;
        exit(1);
    } 

    return a;
}

bool LineChecker(float a, float b, float c){

    return(!a || !b);
}


double dataXdammiY(float a, float b, float c, float x){
    
    return -(a/b) * x - (c/b);
    
}

double dataYdammiX(float a, float b, float c, float y){
    
    return -(b/a) * y - (c/a);
}

bool puntoXYsuRetta (float a, float b, float c, float x, float y){

    return a * x + b * y + c == 0;
}
*/