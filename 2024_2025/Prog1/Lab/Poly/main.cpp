#include <iostream>
#include <string>
#include "polinomi.h"
#include "fun.h"


int main(){
  
  cout << "Leggo il polinomio" << endl;
  int deg;

  double * poly = leggiPolinomio(deg);
  
  // QUI LEGGE UN POLINOMIO MEMORIZZANDO I SUOI COEFFICIENTI
  // IN UN ARRAY DI double E IL SUO GRADO IN UNA VARIABILE int

  cout << "Polinomio dato: ";
  // QUI STAMPA IL POLINOMIO LETTO E POI VA A CAPO
  stampaPolinomio(poly, deg);
  cout<<endl;

  cout << "Derivata prima: ";

  int degDer;
  double * derPoly = derivataPolinomio(poly, deg, degDer);
  stampaPolinomio(derPoly, degDer);
  cout<<endl;

  cout << "Derivata seconda: ";
  // QUI STAMPA LA DERIVATA SECONDA E POI VA A CAPO
  int degDer2;
  double * der2Poly = derivataPolinomio(derPoly, degDer, degDer2);
  stampaPolinomio(der2Poly, degDer2);
  cout<<endl;
  
  cout << "Quanti punti vuoi considerare?" << endl;
  // CHIEDE ALL'UTENTE UN INTERO NON NEGATIVO, SIA K
  int K = read_num_val("inserire il numero di valori");

  for (int i=0; i<K; i++)
  {
    // cout << "Dammi il valore di x: ";

    double x = read_coeff("Inserire il valore di x_", i);

    cout << "Valore del polinomio in x_"<<i<<": ";
    // STAMPA IL VALORE DEL POLINOMIO IN x E VA A CAPO
    cout<<valorePolinomio(poly, deg, x)<<endl;

    cout << "Valore della derivata prima in x_"<<i<<": ";
    double der = valorePolinomio(derPoly, degDer, x);
    // STAMPA IL VALORE DELLA DERIVATA PRIMA IN x E VA A CAPO
    cout<<der<<endl;

    cout << "Valore della derivata seconda in x_" <<i<<": ";
    // STAMPA IL VALORE DELLA DERIVATA SECONDA IN x E VA A CAPO
    double der2 = valorePolinomio(der2Poly, degDer2, x);
    cout<<der2<<endl;

    // SE IL POLINOMIO E' CRESCENTE IN x STAMPA "crescente",
    // SE E' DECRESCENTE STAMPA "crescente", ALTRIMENTI NULLA, 
    // E POI VA A CAPO

    // SE IL POLINOMIO HA CONCAVITA' VERSO L'ALTO IN x STAMPA "concavo",
    // SE HA CONCAVITA' VERSO IL BASSO STAMPA "convesso", ALTRIMENTI NULLA,
    // E POI VA A CAPO

    studioPoly(der, der2);

  }
  cout << endl << endl;
  
//   // ********* PARTE FACOLTATIVA: 
//   //cout << "Leggo un altro polinomio\n";
//   // CHIEDE UN ALTRO POLINOMIO E LO MEMORIZZA
//   //cout << "Altro Polinomio dato: ";
//   // STAMPA QUESTO SECONO POLINOMIO LETTO E POI VA A CAPO
//   //cout << "Polinomio somma: ";
//   // STAMPA IL POLINOMIO SOMMA DEI DUE POLINOMI MESSI DALL'UTENTE
//   //cout << endl << endl;
  
Clean(poly, derPoly, der2Poly);

return 0;

}