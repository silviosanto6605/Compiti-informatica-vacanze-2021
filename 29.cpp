#include <iostream>
#include "src/funzioni.h"
using namespace std;


int main()
{
	long long n = 0;
	
	cout<<"Inserisci un numero binario: "<<endl;
	cin>>n;
    cout << "Il decimale di " << n << " e' " << binaryToDecimal(n) << endl;

    
}
