/* Funzioni usate per gli esercizi estivi - Silvio Santoriello (C) 2021
*/

#include <iostream>

using namespace std;

int calcMultipli(int partenza, int fine, int n)
{
    for (int i = partenza; i < fine; i++)
    {

        if (i % n == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}

int factorial(int n)
{

    long double fattoriale = 1.0;

    if (n < 0)
    {
        cout << "Non esiste il fattoriale di un numero negativo";
        return 0;
    }

    else
    {
        for (int i = 1; i <= n; ++i)
        {
            fattoriale *= i;
        }
        return fattoriale;
    }
}

void DecToBin(int n)
{

    int i;
    int a[64] = {};

    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    cout << "Numero in formato binario = ";
    for (i = i - 1; i >= 0; i--)
    {
        cout << a[i];
    }
    cout << endl;
}

void Quadrato_N_numeri(int n)
{
    int quadrato = 0, dispari = 1;

    for (int x = 0; x < n; x++)
    {
        cout << quadrato << " ";
        quadrato = quadrato + dispari;
        dispari = dispari + 2;
    }
}
