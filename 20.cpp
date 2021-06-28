#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int k,n,somma = 0;

    cout<<"Inserisci un numero: ";
    cin>>n;

    cout<<"Inserisci K: ";
    cin>>k;

    for(int i=1; i<=k;i++){

        somma=somma+pow(n+i,2);


    }


    cout<<"Risultato: "<<somma;
    return 0;

}



