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

void DecToOctal(int n) {
    int resto; 
    int ottale = 0, i = 1;
   
    while(n != 0) {
        resto = n%8;
        n = n/8;
        ottale = ottale + (resto*i);
        i = i*10;
    }
    cout<<ottale;
}

void BinToDec(int n) {
   int decimalNumber = 0;
   int base = 1;
   int temp = n;
   
   while (temp) {
      int lastDigit = temp % 10;
      temp = temp/10;
      decimalNumber += lastDigit*base;
      base = base*2;
   }
   cout<<"Il decimale di "<<n<<" e' "<<decimalNumber<<endl;;
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
