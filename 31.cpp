#include <iostream>
#include "src/funzioni.h"

using namespace std;

float divisione();
float moltiplicazione();
int scelta = 0;

int main() {

    int x, y;
    cout << "Inserisci un numero X: ";
    cin >> x;
    cout << "Inserisci un numero y: ";
    cin >> y;


    cout<<"Cosa vuoi effettuare \n 1)Moltiplicazione \n 2) Divisione"<<endl;
    cin>>scelta;
    while (scelta != 1 && scelta != 2){
        cout<<"Valore non valido!"<<endl;
        cout<<"Cosa vuoi effettuare \n 1)Moltiplicazione \n 2) Divisione";
        cin>>scelta;
    }

    switch (scelta) {
        case 1:
            cout<<"Prodotto: "<<moltiplicazione(x,y);
            break;
        case 2:
            cout<<"Quoziente: "<<divisione(x,y);
    }


}




