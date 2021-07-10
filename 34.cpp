#include <iostream>


using namespace std;

int main() {


    int a, b, a_iniziale, b_iniziale;


    cout << "Inserisci A: ";
    cin >> a;
    cout << "Inserisci B: ";
    cin >> b;

    a_iniziale = a;
    b_iniziale = b;

    while (a != b) {

        if (b < a) { /*B Minore */

            b = b + b_iniziale;
            cout << "B = " << b << endl;


        } else if (a < b) { /*A minore */

            a = a + a_iniziale;
            cout << "A = " << a << endl;


        }
    }
    cout << "Valore A: " << a << endl;
    cout << "Valore B: " << b << endl;
}

