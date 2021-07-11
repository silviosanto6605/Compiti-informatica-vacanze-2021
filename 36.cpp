#include <iostream>

using namespace std;

int main() {

    int oraInizio = 0, oraFine = 0, minutiInizio = 0, minutiFine = 0, totaleOre = 0, totaleMinuti = 0;

    /* Inserimento orario di inizio */

    cout << "Inserisci l'ora di inizio: ";
    cin >> oraInizio;

    cout << "Inserisci i minuti dell'ora di inizio: ";
    cin >> minutiInizio;

    /* Inserimento orario di fine */
    cout << "Inserisci l'ora di fine: ";
    cin >> oraFine;

    cout << "Inserisci i minuti dell'ora di fine: ";
    cin >> minutiFine;

    if (oraInizio > 24 || oraInizio < 0 || oraFine > 24 || oraFine < 0) {
        cout << "Ora non valida " << endl;

    }
    if (minutiInizio > 60 || minutiInizio < 0 || minutiFine > 60 || minutiFine < 0) {
        cout << "Numero di minuti non valido" << endl;


    }


    totaleOre = oraFine - oraInizio;
    totaleMinuti = minutiFine - minutiInizio;

    if (totaleMinuti < 0 || totaleOre < 0) {

        totaleOre = totaleOre +
                    24; /* Se l'orario di fine è precedente all'orario di inizio, considera lo stesso orario ma giorno seguente */
        totaleMinuti = abs(totaleMinuti); /* Per i minuti considera il valore assoluto */
    }


    cout << "Ore da retribuire: " << totaleOre << "." <<
         totaleMinuti;


}