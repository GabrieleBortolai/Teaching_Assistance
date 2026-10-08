/* 
Semplice calcolatrice
=====================

Legge da standard input una sequenza di caratteri, costituita di:
- cifre numeriche che compongono numeri decimali
- il punto decimale '.'
- simboli di operazioni aritmetiche '+', '-', 'x', '/'; ammette anche 
   'X' e '*' come alias della moltiplicazione
- il simbolo '=' conclude il calcolo corrente e mostra il risultato
- il simbolo 'C' azzera la calcolatrice e permette di iniziare un nuovo calcolo
- il simbolo 'Q' termina il programma

Numeri e operatori si alternano secondo la sintassi standard delle espressioni
aritmetiche; non sono ammessi spazi o altri separatori.
I numeri vengono "costruiti" dal programma leggendo un carattere alla volta
e traducendo le cifre in valori numerici.
Ogni simbolo di operazione combina il risultato dell'espressione che lo precede
col numero che lo segue (quindi la calcolatrice NON rispetta le precedenze
degli operatori aritmetici).

Il programma mostra progressivamente ciò che è visibile nel display della
calcolatrice dopo aver processato ogni carattere in input.

Implementazione:
- il programma mantiene la seguente struttura dati:
    * un accumulatore, che contiene il risultato dell'espressione calcolata
      in precedenza e costituisce il primo operando della prossima operazione
    * il simbolo della prossima operazione da eseguire
    * un numero corrente, che viene costruito leggendo un carattere alla volta
      e costituisce il secondo operando della prossima operazione
    * un flag prima, che vale true quando non c'è ancora un'operazione pendente
      da eseguire: all'inizio di un nuovo conto, oppure subito dopo '=' o 'C'
    * una variabile disp, che contiene il valore correntemente visualizzato
- il main consiste di un unico ciclo while infinito, che termina con break
  quando viene letto il simbolo 'Q'
- ad ogni iterazione, il programma legge un solo carattere:
    * se si tratta di una cifra, la converte in numero e la combina col numero
      che sta costruendo
    * se si tratta del primo punto decimale del numero corrente, passa alla
      costruzione della parte frazionaria
    * se si tratta di uno dei quattro operatori o del simbolo '=':
        . se prima vale true, il numero corrente viene copiato nell'accumulatore:
          è il primo operando di una nuova sequenza di calcolo
        . altrimenti viene eseguita l'operazione memorizzata in precedenza,
          combinando l'accumulatore col numero corrente, e il risultato viene
          nuovamente memorizzato nell'accumulatore
        . il valore aggiornato dell'accumulatore viene mostrato sul display
        . se il carattere letto è uno dei quattro operatori, questo viene
          memorizzato come prossima operazione da eseguire, prima diventa false
          e viene predisposta la costruzione del nuovo numero
        . se il carattere letto è '=', il calcolo corrente viene concluso:
          prima torna true e il risultato viene copiato in num, così da poter
          essere usato come primo operando se il conto continua con un nuovo
          operatore
    * se si tratta di 'C' o 'c', azzera lo stato della calcolatrice e riporta
      prima a true
    * se si tratta di 'Q' o 'q', termina immediatamente il ciclo con break
    * ogni altro carattere viene semplicemente ignorato
- l'esecuzione delle operazioni aritmetiche è demandata a uno switch
  sull'operatore memorizzato
- alla fine di ogni iterazione viene visualizzato il valore contenuto in disp

Il programma non fa controlli completi sull'input, assumendo che l'utente
fornisca sempre una sequenza coerente con il funzionamento della calcolatrice.
In particolare, dopo '=' si assume che l'utente continui con un nuovo operatore,
oppure prema 'C'/'c' per iniziare un nuovo conto o 'Q'/'q' per terminare.
*/

#include <iostream>
using namespace std;

int main()
{
    // struttura dati
    char c;                 // carattere che viene letto ad ogni iterazione
    char op;                // prossima operazione da eseguire
    double acc = 0;         // accumulatore (primo operando)
    double num = 0;         // secondo operando
    double disp = 0;        // valore visualizzato sul display
    double fattore = 0.1;   // peso della prossima cifra dopo il punto decimale
    bool decimale = false;  // indica se e' gia' stato letto il punto decimale
    bool prima = true;      // true se la prima operazione non e' ancora impostata

    cout << "Calcolatrice per numeri decimali\n";

    // Acquisisce i caratteri uno alla volta
    // finché sono cifre, costruisce un numero
    // se è un operatore, compie un'operazione e ricorda quale sarà la prossima
    while (true) // ciclo infinito, esce con break
    {
        cin >> c;

        if (c >= '0' && c <= '9') { // se c è una cifra
            int cifra = static_cast<int>(c - '0');

            if (decimale) { // costruisce la parte frazionaria
                num = num + cifra * fattore;
                fattore = fattore / 10;
            }
            else { // costruisce la parte intera
                num = 10 * num + cifra;
            }

            disp = num;
        }

        else if (c == '.' && !decimale) { // primo punto decimale
            decimale = true;
            disp = num;
        }

        else if (c == '+' || c == '-' || c == '/' || c == 'x' || c == 'X' || c == '*' || c == '=') {

            if (prima) {
                acc = num; // primo operando della nuova sequenza
            }
            else {
                // esegue l'operatore memorizzato in precedenza,
                // non quello letto adesso!
                switch (op) {
                    case '+': acc = acc + num; break;
                    case '-': acc = acc - num; break;
                    case '/': acc = acc / num; break;
                    case 'x':
                    case 'X':
                    case '*': acc = acc * num; break;
                }
            }

            disp = acc;

            if (c == '=') {
                prima = true; // il calcolo corrente è concluso
                num = acc;
            }
            else {
                // prepara la costruzione del prossimo numero
                fattore = 0.1;
                decimale = false;
                num = 0;
                op = c;       // prossima operazione da eseguire
                prima = false;
            }
        }

        else if (c == 'C' || c == 'c') { // azzera la calcolatrice
            acc = 0;
            num = 0;
            disp = 0;
            fattore = 0.1;
            decimale = false;
            prima = true;
        }

        else if (c == 'Q' || c == 'q') { // spegne la calcolatrice
            break;
        }

        cout << "Display:\t" << disp << endl;

    }

    cout << "Bye!\n";
    return 0; // indica che il programma ha terminato correttamente
}

/*
Come funziona la conversione da caratteri a numeri e la costruzione di num:

- ogni cifra letta è un carattere

- l'operazione (c-'0') sottrae al codice ASCII di c il codice ASCII della
  cifra 0

- poiché le cifre hanno codici consecutivi nella tabella ASCII, il valore
  numerico di questa operazione è esattamente il valore del numero decimale
  rappresentato dalla cifra c: ad esempio, se c vale '6', il valore numerico
  di c-'0' è 6

- tuttavia, l'operazione (c-'0') è un'operazione tra caratteri.
  L'istruzione static_cast<int>(c-'0') dice semplicemente al programma di
  interpretare il risultato di tale operazione come un valore intero

- finché non è stato letto il punto decimale, l'operazione

      num = 10*num + cifra

  aggiorna num aggiungendo una nuova cifra alla sua destra

- quando viene letto il primo punto decimale, il flag decimale viene posto
  a true. Da quel momento le nuove cifre vengono aggiunte alla parte
  frazionaria del numero

- la variabile fattore contiene il peso della prossima cifra decimale:
  viene inizializzata a 0.1, quindi assume successivamente i valori
  0.01, 0.001, ...

- se, ad esempio, dopo aver costruito 12 viene letto il punto e poi la
  cifra 3, num diventa

      12 + 3*0.1 = 12.3

  leggendo poi 4, diventa

      12.3 + 4*0.01 = 12.34

- quando viene letto uno dei quattro operatori aritmetici, il numero corrente
  è terminato: num viene azzerato, fattore torna a 0.1 e decimale torna a
  false, in modo da poter costruire l'operando successivo

- quando viene letto '=', invece, num non viene azzerato ma assume il valore
  del risultato contenuto in acc: in questo modo il risultato resta disponibile
  come primo operando se il calcolo prosegue con un nuovo operatore

- un secondo punto decimale nello stesso numero viene semplicemente ignorato

Nota: la costruzione progressiva della parte frazionaria mediante valori
floating point può introdurre i normali errori di approssimazione della
rappresentazione binaria dei numeri reali.
*/
