#include <iostream>
#include <string>

using namespace std;

int main() {


    int n = 0;
    char *input = new char(n); /* Array con allocazione dinamica della memoria */
    int numeroVocali = 0;
    int numeroConsonanti = 0;


    cout << "Quante lettere vuoi inserire? ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        cout << "Inserisci una lettera: ";
        cin >> input[i];
        input[i] = putchar(toupper(input[i])); /* Converti il carattere in input in un carattere maiuscolo */

    }

    for (int j = 0; j < n; ++j) {

        if (input[j] == 'A' || input[j] == 'E' || input[j] == 'I' || input[j] == 'O' || input[j] == 'U') { /* Controlla se sono presenti vocali */

            numeroVocali++;


        } else if (input[j] != 'A' || input[j] != 'E' || input[j] != 'I' || input[j] != 'O' || input[j] != 'U') { /* Controlla se non sono presenti vocali */

            numeroConsonanti++;


        }


    }


    cout << "Numero vocali: " << numeroVocali << endl;
    cout << "Numero consonanti: " << numeroConsonanti;


}