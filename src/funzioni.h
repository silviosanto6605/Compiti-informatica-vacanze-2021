#include <iostream>

using namespace std;


int calcMultipli(int partenza, int fine, int n){
    for(int i=partenza; i<fine; i++){

        if(i%n == 0){
            cout<<i<<endl;

        }


    }
    return 0;
    

}



int factorial(int n) {

    long double fattoriale = 1.0;


    if (n < 0){
        cout << "Non esiste il fattoriale di un numero negativo";
        return 0;
    }
        
    else {
        for(int i = 1; i <= n; ++i) {
            fattoriale *= i;
        }
        return fattoriale;    
    }

}


void Quadrato_N_numeri(int n)
{
    int quadrato = 0, dispari = 1;
 
    for(int x = 0; x < n; x++)
    {
        cout << quadrato << " ";
        quadrato = quadrato + dispari;
        dispari = dispari + 2;
    }
}

