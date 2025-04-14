#include <iostream>
#include "fun.h"

using namespace std;

double * leggiPolinomio(int &grado){

    double * poly = NULL;

    grado = read("Inserisci il grado");

    poly = new double[grado + 1];

    for(int i = grado; i>=0; i--){

        poly [i] = read_coeff("inserisci il coefficente del termine ", i);
    }

    return poly;
}

void stampaPolinomio(double * Pol, int grado)
{
  if (grado==0)
  {
     cout << Pol[0] << " ";
     return;
  }
  for (int i=grado; i>=0; i--)
  {
    if (Pol[i]==0) continue; // non stampo termini nulli
    if (i<grado && Pol[i]>0) cout << "+";

    if (Pol[i]==1) 
    {  if (i==0) cout << Pol[i];  }
    else if (Pol[i]==-1)
    {  if (i==0) cout << Pol[i]; else cout << "-";  }
    else cout << Pol[i];
    
    if (i>0) cout << "x";
    if (i>1) cout << "^"<< i;
    cout << " ";
  }
}

double * derivataPolinomio(double * Pol, int grado, int &gradoDer){

    double * derPoly = NULL;
    
    gradoDer = grado - 1;

    derPoly = new double [gradoDer + 1];

    for(int i = gradoDer; i>=0; i--){

        derPoly[i] = Pol[i + 1] * (i + 1);

    }

    return derPoly;
}

void Clean(double *v1, double *v2, double *v3){

    unmount_pointer(v1);
    unmount_pointer(v2);
    unmount_pointer(v3);

}

