#include <iostream>
#include "src/funzioni.h"
using namespace std;
int main(int argc, char const *argv[])
{
    int number, base;

    cout << "Inserisci un numero: ";
    cin >> number;
    cout << "Inserisci la base, compresa tra 2 e 16: ";
    cin >> base;

    cout<<"base = "<<base<<"\tnum = "<<number<<" => "<<convertToAnyBase(number,base)<<" in base"<<base<<endl;
    return 0;
}
