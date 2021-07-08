#include <iostream>
using namespace std;
int main()
{
	char binaryNumber[] = ""; 
	
	cout<<"Inserisci un numero binario: "<<endl;
	cin>>binaryNumber;

    cout << stoi(binaryNumber, 0, 2);
    return 0;;
}