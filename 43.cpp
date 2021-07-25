#include <iostream>
#include "src/funzioni.h"
int main () {

    long long sequence;
    int choice;
    cout<<"Inserisci una sequenza binaria: ";
    cin>>sequence;
    cout<<"In quale base vuoi convertirla?\n1) Quaternaria\n2) Ottale\n3)Esadecimale\n";
    cin>>choice;
    cout<<endl;

    switch (choice) {
        case 1:
            cout<<"Base 4 => "<<convertToAnyBase(binaryToDecimal(sequence),4);
            break;
        case 2:
            cout<<"Base 8 => "<<convertToAnyBase(binaryToDecimal(sequence),8);
            break;
        case 3:
            cout<<"Base 16 => "<<convertToAnyBase(binaryToDecimal(sequence),16);
            break;
    }

}