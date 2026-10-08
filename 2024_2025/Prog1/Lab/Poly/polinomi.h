#ifndef POLINOMI_HEADER_INCLUDED
#define POLINOMI_HEADER_INCLUDED

/*------------------------------------------------------------------------
Un polinomio di grafo N e' rappresentato dal suo grado (numero intero >=0)
e da un array di N+1 elementi reali dove l'elemento di indice i contiene
il coefficiente del termine x^i, per i=0,1....N.
In un polinomio corretto il coefficiente di grado massimo non deve
essere zero, tranne il caso in cui il polinomio abbia grado zero.
------------------------------------------------------------------------*/

/*
Stampa una rappresentazione del polinomio nella notazione usuale, 
dati l'array dei coefficienti Pol e il grado del polinomio.
Non va a capo dopo la stampa.
Per un corretto funzionamento l'array deve avere lunghezza grado+1.
*/
void stampaPolinomio(double * Pol, int grado);

/*
Chiede all'utente prima un intero non negativo che sara' il grado del 
polinomio. Poi chiede tutti i coefficienti del polinomio che saranno 
numeri reali un quantita' pari al grado +1.
Deve essere messo per primo il coefficiente del termine di grado 
massimo e poi a scendere, fino all'ultimo che sara' il coefficiente 
di grado 0.
Tranne quando il grado del polinomio e' zero, il primo coefficiente 
non deve essere zero.
Se l'input messo dall'utente non soddisfa i requisiti, termina il 
programma con un messaggio di errore.
Se invece l'input e' corretto ritorna come risultato l'array dei 
coefficienti del polinomio e il grado nella variabile grado passata 
per riferimento.
*/
double * leggiPolinomio(int &grado);

/*
Calcola il valore del polinomio in X.
*/
double valorePolinomio(double * Pol, int grado, double X);

/*
Calcola la derivata prima del polinomio, che sara' un altro polinomio.
Il grado della derivata e' uno in meno rispetto al polinomio dato,
tranne il caso in cui il polinomio sia di grado 0. In tal caso
la derivata ha grado zero ed e' zero.
La funzione ritorna l'array dei coefficienti come risultato e il 
grado della derivata nella variabile gradoDer passata per riferimento.
Nel calcolare la derivata, ogni termine A*x^i diventa
A*i*x^(i-1), e il termine noto non conta.
*/
double * derivataPolinomio(double * Pol, int grado, int &gradoDer);

/* PARTE FACOLTATIVA:
Calcola il polinomio somma e ritorna l'array dei suoi coefficienti,
mentre il grado della somma viene ritornato nella variabile
gradoSomma passata per riferimento.
Bisogna porre attenzione al fatto che la somma di due polinomi
di grado uguale potrebbe avere un grado inferiore, se i termini
di grado maggiore si annullano tra loro.
Nel polinomio risultato, il termine di grado pari a gradoSomma
non deve essete zero.
*/
double * sommaPolinomi(double * P1, int grado1, double *P2, int grado2, int &gradoSomma);


void stampaPolinomio(double * Poly, int degree);
void Clean(double *v1, double *v2, double *v3);
void studioPoly(double &der, double &der2);

#endif