#include <iostream>

using namespace std;


int main() {

    int n, n1 = 1, n2 = 0, n3 = n1 + n2;

    cout << "Inserisci il numero di terne da calcolare: ";
    cin >> n;

    for (int i = 2; i <= n + 1; i++) { /* Ciclo per i numeri progressivi*/


        n2 = i;
        n1 = n3;
        n3 = n1 + n2;
        cout << n1 << "\t" << n2 << "\t" << n3 << endl;

    }


}