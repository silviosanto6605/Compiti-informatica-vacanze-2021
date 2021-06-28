#include <iostream>
using namespace std;


int main()
{
    
    int a, numerovalore = 0, n=5, x=0;

    cout<<"Inserisci A: ";
    cin>>a;

    for(int i=0; i<100;i++){
        
        numerovalore +=1;
        x=n+a;
        cout<<x<<endl;
        n+=5;

    }


    cout<<"Quanti numeri? "<<numerovalore;

}