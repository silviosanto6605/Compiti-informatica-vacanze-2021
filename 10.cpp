#include <iostream>
#include <math.h>

using namespace std;
int main(){

    int N,i,numero;
    float mediaAritm, mediaGeom, sommaNumeri=0, prodottoNumeri=1;

    cout<<"Quanti numeri vuoi inserire? ";
    cin>>N;

    while(i<N){

        cout<<"\nInserisci un numero intero positivo: \t";
        cin>>numero;
        prodottoNumeri = prodottoNumeri*numero;
        sommaNumeri = sommaNumeri+numero;
        i++;

    }

    mediaAritm = sommaNumeri/i;
    mediaGeom = pow(prodottoNumeri,1/float(i));
    cout<<"\n Media aritmetica: "<< mediaAritm<<endl;
    cout<<"\n Media geometrica: "<< mediaGeom<<endl;
    




}