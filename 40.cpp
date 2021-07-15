#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int N, num = 1,numRiga = 1,valoriStampati=0;
	cout << "Inserisci un numero: ";
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		do{
			cout << num << " ";
			valoriStampati+=1;
			num++;
		}
		while(valoriStampati<numRiga);
		valoriStampati = 0;
		numRiga+=1;		

		cout << endl;
	}
}