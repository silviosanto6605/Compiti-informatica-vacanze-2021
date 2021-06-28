#include <iostream>
#include "src/funzioni.h"
using namespace std;


int main()
{

    int N,numero;

    cout<<"Di quanti numeri vuoi caclcolare il fattoriale? ";
    cin>>N;

    double numeri [N];

    for(int i = 0; i<N; i++){ /*Inserimento numeri nell'array */ 

        cout<<"Inserisci un numero: ";
        cin>>numero;

        numeri[i] = numero;

        cout<<numero<<"! = "<<factorial(numeri[i])<<endl;

    }


    return 0;
    


}






