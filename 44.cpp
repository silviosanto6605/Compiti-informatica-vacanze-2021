#include <iostream>
#include "src/funzioni.h"

using namespace std;

int contaPos = 0, contaNeg = 0, contaNull = 0, contaPari = 0, contaDisp = 0;
bool isCrescente = false;
bool isDerescente = false;
bool nonDefinito = false;
int controlloSequenzaisCrescente = 0;
int controlloSequenzaisDecrescente = 0;
int n = 0;

int main() {

    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;


    int *numeri = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "Inserisci un numero: ";
        cin >> numeri[i];
    }

    for (int j = 0; j < n; j++) { /* Ciclo l'array per accedere ai valori */
        /* Controllo positivo/negativo */
        if (numeri[j] > 0) { contaPos += 1; }
        else if (numeri[j] < 0) { contaNeg += 1; }
        else if (numeri[j] == 0) { contaNull += 1; }

        /* Controllo pari/dispari */
        if (abs(numeri[j]) % 2 == 0) { contaPari += 1; }
        else if (abs(numeri[j]) % 2 == 1) { contaDisp += 1; }

        if (j > 0) {
            if (numeri[j] > numeri[j - 1]) {
                controlloSequenzaisCrescente += 1;
            }
            if (numeri[j] < numeri[j - 1]) {
                controlloSequenzaisDecrescente += 1;
            }
            else{
                nonDefinito = true;
            }

        }
        

    }
    if (controlloSequenzaisCrescente == n-1) { isCrescente = true; }
    else if (controlloSequenzaisDecrescente == n-1) { isDerescente = true; }



    cout << "\nNumeri pari: " << contaPari << endl;
    cout << "\nNumeri dispari: " << contaDisp << endl;
    cout << "\nNumeri positivi: " << contaPos << endl;
    cout << "\nNumeri negativi: " << contaNeg << endl;
    cout << "\nNumeri nulli: " << contaNull << endl;

    if (isCrescente) { cout << "\nE' una sequenza crescente." << endl; }
    else if (isDerescente) { cout << "\nE' una sequenza decrescente." << endl; }
    else if (nonDefinito) { cout << "\nE' una sequenza ne' crescente ne decrescente." << endl; }


}

