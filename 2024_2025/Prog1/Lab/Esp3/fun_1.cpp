#include <iostream>
#include <cmath>

using namespace std;

int Reader(string);
bool Triang(int, int, int);
int Per(int, int, int);
double Area(int, int, int, int);

int main(){

    int l1 = Reader("Inserire il primo lato");
    int l2 = Reader("Inserire il secondo lato");
    int l3 = Reader("Inserire il terzo lato");

    if(Triang(l1, l2, l2)){
        int per = Per(l1, l2, l3);
        double area = Area(per, l1, l2, l3);

        cout<<"Il perimetro vale: "<<per<<endl;
        cout<<"L'area vale: "<<area<<endl;
    } else {
        cerr<<"Impossible procedere"<<endl;
        return 1;
    }

    return 0;
}

int Reader(string title){

    int a;

    cout<<title<<endl;
    cin>>a;

    if(!cin || a <= 0){
        
        cerr<<"Errore variabile non ammessa"<<endl;
        cout<<"Inserire un valore positivo"<<endl;

        cin>>a;
    }

    return a;
}

bool Triang(int l1, int l2, int l3){

    if(l1 <= l2 + l3 && l2 <= l1 + l3 && l3 <= l2 + l1){

        return true;
    
    } else {
        cerr<<"I valori inseriti non formano un triangolo"<<endl;
        return true;
    }
}

int Per(int l1, int l2, int l3){
    return l1 + l2 + l3;
}

double Area(int per, int l1, int l2, int l3){
    
    double p = double(per)/2;

    return sqrt(p * (p - l1) * (p - l2) * (p - l3));
}
