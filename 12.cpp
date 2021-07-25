#include <iostream>

using namespace std;
int main()
{

    int limite1, limite2, nAltezze, altezza;

    cout << "Inserisci il numero di altezze che vuoi inserire: \t";
    cin >> nAltezze;

    cout << "Inserisci il limite iniziale: \t";
    cin >> limite1;

    cout << "Inserisci il limite finale: \t";
    cin >> limite2;

    int *altezze = new int[nAltezze];

    for (int i = 0; i < nAltezze; i++)
    { /* Cicla l'array per inserire tutte le altezze */

        cout << "Inserisci un'altezza: ";
        cin >> altezze[i];
    }

    for (int j = 0; j < nAltezze; j++)
    { /* Cicla l'array per controllare le altezze che soddisfano le condizioni*/

        if (altezze[j] > limite1 && altezze[j] < limite2)
        {

            cout << altezze[j] << endl;
        }
    }
    return 0;
}