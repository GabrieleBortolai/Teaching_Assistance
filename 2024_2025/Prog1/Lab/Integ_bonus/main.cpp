#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

/* -------------------------------------------------------------------------
Esercizio di Programmazione 1 valido per il bonus.
Calcolo approssimato dell'integrale definito mediante il metodo dei trapezi.
Parte 1
------------------------------------------------------------------------- */

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

/*
Calcola l'integrale della funzione numero F
nell'intervallo [a,b] con il metodo dei trapezi,
suddividendo l'intervallo in N parti.
Deve essere a<b e N>0.
*/
double integraleTrapezi(int F, double a, double b, int N)
{
  return 0; // IMPLEMENTAZIONE PROVVISORIA DA SOSTITUIRE
}

/* ---------------------------------------------------- */

int main()
{
  cout << "Quale funzione vuoi integrare? (1,2,3,4)" << endl;
  // Chiedere il numero della funzione
  
  cout << "Primo estremo dell'intervallo di integrazione?" << endl;
  // Chiedere il primo estremo dell'intervallo
  cout << "Secondo estremo dell'intervallo di integrazione?" << endl;
  // Chiedere il secondo estremo dell'intervallo

  cout << "Quanti trapezi vuoi utilizzare?" << endl;
  // Chiedere il numero di parti in cui va diviso l'intervallo

  // La richiesta dell'input deve comprendere il controllo
  // che questo soddisfi i requisiti. In caso contrario
  // segnalare errore e terminare il programma.

  cout << "Integrale approssimato:" << endl;
  // Stampa dell'integrale calcolato
  
  cout << endl;

  return 0;
}