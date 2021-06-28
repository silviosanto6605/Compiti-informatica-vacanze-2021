#include <iostream>
#include <math.h>

using namespace std;
int main()
{

    int N, i, numero, sommaPos = 0, sommaNeg = 0, contaPos = 0, contaNeg = 0;

    cout << "Quanti numeri vuoi inserire? ";
    cin >> N;

    while (i < N)
    {

        cout << "\nInserisci un numero: \t";
        cin >> numero;

        if (numero < 0)
        { /* negativo*/

            sommaNeg = sommaNeg + numero;
            contaNeg++;
        }

        else if (numero > 0)
        { /* positivo */
            sommaPos = sommaPos + numero;
            contaPos++;
        }
        i++;
    }

    cout << "Somma positivi: " << sommaPos << endl
         << "Conta positivi: " << contaPos << endl;
    cout << "Somma negativi: " << sommaNeg << endl
         << "Conta negativi: " << contaNeg << endl;

    return 0;
}