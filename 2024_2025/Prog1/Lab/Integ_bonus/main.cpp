#include <iostream>
#include <cmath>
#include <cstdlib>
#include "fun.h"

using namespace std;

double f(int, double);
double integraleTrapezi(int, int, int, int);
void Lato(int &, int &, int &);
double Area_Trap(double, double, int &);
void epsilon(int &, int &, int &);

/* -------------------------------------------------------------------------
Esercizio di Programmazione 1 valido per il bonus.
Calcolo approssimato dell'integrale definito mediante il metodo dei trapezi.
Parte 1
------------------------------------------------------------------------- */


/* ---------------------------------------------------- */

int main()
{
//   cout << "Quale funzione vuoi integrare? (1,2,3,4)" << endl;
//   Chiedere il numero della funzione
  int qualeFunzione = read("Quale funzione vuoi integrare? (1,2,3,4)");
  
//   cout << "Primo estremo dell'intervallo di integrazione?" << endl;
//   Chiedere il primo estremo dell'intervallo
  int a = read("Primo estremo dell'intervallo di integrazione?");

//   cout << "Secondo estremo dell'intervallo di integrazione?" << endl;
//   Chiedere il secondo estremo dell'intervallo
  int b = read("Secondo estremo dell'intervallo di integrazione?");

//   cout << "Quanti trapezi vuoi utilizzare?" << endl;
  // Chiedere il numero di parti in cui va diviso l'intervallo
  int trap_num = read("Quanti trapezi vuoi utilizzare?");

  // La richiesta dell'input deve comprendere il controllo
  // che questo soddisfi i requisiti. In caso contrario
  // segnalare errore e terminare il programma.

  cout << "Integrale approssimato:" << endl;
  // Stampa dell'integrale calcolato
  
  cout <<integraleTrapezi(qualeFunzione, a, b, trap_num)<<endl;

  return 0;
}

/* Calcola il valore della funzione numero qualeFunzione
sull'argomento x. */
double f(int qualeFunzione, double x)
{
  switch (qualeFunzione)
  {
    case 1:  return 0.5*x + 4;
    case 2:  return 0.5*x*x -x + 1;
    case 3:  return cos(x);
    case 4:  return pow(M_E,-0.1*x*x);
    // non dovrebbe mai arrivare qui
    default: return 0;
  }
}

void Lato(int &a, int &b, int &l){

    l = abs(a - b);
}

double Area_Trap(double B, double b, int &h){

    return ((B + b) * h)/2;
}

void epsilon(int &h, int &N, int &e){

    e = h/N;
}
/*
Calcola l'integrale della funzione numero F
nell'intervallo [a,b] con il metodo dei trapezi,
suddividendo l'intervallo in N parti.
Deve essere a<b e N>0.
*/
double integraleTrapezi(int F, int a, int b, int N){

    check_extremes(a, b);
    check_numTrap(N);

    double A = 0, sum = 0;
    int h, e;

    Lato(a, b, h);
    epsilon(h, N, e);

    for(int i=0; i<N; i++){

        A += Area_Trap(f(F, a + (i + 1) * e), f(F, a + i * e), e);
        
    }

    return A;
}