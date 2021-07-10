#include <iostream>
#include "src/funzioni.h"

using namespace std;

int main() {

    int base, exp;

    cout << "Inserisci la base: ";
    cin >> base;
    cout << "Inserisci l'esponente: ";
    cin >> exp;


    cout << endl << "Potenza usando le 4 operazioni: " << potenza32_A(base, exp) << endl;
    cout << endl << "Potenza usando 2 operazioni: " << potenza32_B(base, exp) << endl;


}