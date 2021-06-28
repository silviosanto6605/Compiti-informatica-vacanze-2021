#include <iostream>

using namespace std;
int main()
{

    int N, i = 1;
    float media, numero, max, min, somma;

    somma = 0;

    cout << "Quanti numeri vuoi inserire? ";
    cin >> N;

    while (i <= N)
    {

        cout << "Inserisci un numero: ";
        cin >> numero;

        if (i == 1)
        { /* La prima volta, il numero è sia il massimo inserito che il minimo */

            max = numero;
            min = numero;
        }

        else
        { /* Le altre volte esegue il controllo normalmente */

            if (numero > max)
            {
                max = numero;
            }

            if (numero < min)
            {
                min = numero;
            }
        }

        somma = somma + numero;
        i++;
    }

    media = float(somma) / float(N);

    cout << "Minimo: " << min << endl
         << "Massimo: " << max << endl
         << "Media: " << media << endl;
    return 0;
}
