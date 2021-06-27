#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n,p,i=0;

    cout<<"Inserisci un numero: ";
    cin>>n;


    while (p<=n){

 
        p = pow(2,i);
        i++;

    }

    cout<<"La potenza di 2 subito maggiore di "<<n<<" è: "<<p<<endl;
    return 0;

}



