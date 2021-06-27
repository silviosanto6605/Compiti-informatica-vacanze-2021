#include <iostream>


using namespace std;
int main(){

    int x=0, y=0, n=0, a=1;

    cout<<"Inserisci un numero intero: \t";
    cin>>n;
    
    cout<<"Inserisci un numero intero: \t";
    cin>>x;

    cout<<"Inserisci un numero intero: \t";
    cin>>y;


    while(a<y){

        if(a>=x){

            cout<<a<<endl;

        }

        a=a*n;

    }







}