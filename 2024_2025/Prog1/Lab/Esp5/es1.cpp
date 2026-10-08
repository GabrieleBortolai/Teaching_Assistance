#include <iostream>
#include "fun.h"

using namespace std;

void perimetro(double , double , double , double &);
void Area(double, double, double, double, double &);

int main(){

    cout<<"inserire i cateti"<<endl;
    double a = read("Inserire il primo cateto");
    double b = read("Inserire il secondo cateto");
    double c = read("Inserire il terzo cateto");

    double p, area;

    perimetro(a, b, c, p);
    Area(a, b, c, p, area);

    cout<<p<<endl;
    cout<<area<<endl;



    return 0;
}

void perimetro(double a, double b, double c, double &p){

    p = a + b + c;
}

void Area(double a, double b, double c, double p, double &area){

    p = p/2;
    area = p*(p-a)*(p-b)*(p-c);
}