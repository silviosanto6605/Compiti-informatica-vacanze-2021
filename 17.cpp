#include <iostream>

using namespace std;

int main()
{

    int N,sommaPari = 0,prodottoDispari = 1;


    cout<<"Quanti numeri vuoi inserire? ";
    cin>> N;

    int sequenza[N]; /*Creazione array*/

    for(int i=0; i<N; i++){ /*Cicla l'array per inserire i valori al suo interno */

        cout<<"Inserisci un valore: ";
        cin>>sequenza[i];

    }
    
    for(int i=0; i<N; i++){ /*Cicla l'array per valutare i valori al suo interno */


        if(sequenza[i] % 2 == 0){ /* Se è pari */ 

            sommaPari = sommaPari+sequenza[i];
            
        }

        else{ /* Se è dispari */ 

            prodottoDispari = prodottoDispari*sequenza[i];
            
        }

    }


    cout<<"Somma dei numeri pari: "<<sommaPari<<endl<<"Prodotto dei numeri dispari: " <<prodottoDispari<<endl;


    return 0;
}



