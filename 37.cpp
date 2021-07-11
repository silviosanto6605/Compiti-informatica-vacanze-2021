#include <iostream>
#include <vector>
#include <string>

using namespace std;

class contoCorrente {
public:
    float saldo;
    float sommaVersata;
    float sommaPrelevata;
    int numeroVersamenti;
    int numeroPrelievi;
    vector<string> operazioni;


    contoCorrente() {

        saldo = 0;
        sommaVersata = 0;
        sommaPrelevata = 0;
        numeroPrelievi = 0;
        numeroVersamenti = 0;

    };

    void Preleva(float somma) {
        string operazione;
        if (somma > saldo) {
            std::cout << "Saldo insufficiente - Operazione non effettuata";
        } else {
            saldo = saldo - somma;
            sommaPrelevata += somma;
            operazioni.push_back("PRELIEVO: -" + to_string(somma));
            numeroPrelievi += 1;
            cout << "\nHai prelevato " << somma << endl;
            cout << "\nOperazione completata con successo! " << endl;
        }


    }

    void Versa(float somma) {
        saldo = saldo + somma;
        sommaVersata += somma;
        operazioni.push_back("VERSAMENTO: +" + to_string(sommaVersata));
        numeroVersamenti++;
        cout << "\nHai versato " << somma << endl;
        cout << "\nOperazione completata con successo! " << endl;


    }

    float getSommaVersata() { return sommaVersata; }

    float getSommaPrelevata() { return sommaPrelevata; }

    float getSaldo() { return saldo; }

    void getMovimenti() {
        cout << "=====[MOVIMENTI EFFETTUATI]=====";
        for (int i = 0; i < operazioni.size(); i++) {
            cout << "\n" << operazioni[i];

        }
        cout << "\n==============================\n";

    }


};

int main() {

    int scelta = 1;
    float somma = 0;

    contoCorrente conto;

    cout << "Inserisci il saldo iniziale: ";
    cin >> conto.saldo;

    while (scelta != 0) {


        cout
                << "Quali operazioni vuoi effettuare?\n1)Visualizza operazioni\n2)Preleva\n3) Versamento\n0 per terminare"
                << endl;
        cin >> scelta;

        if (scelta == 1) { /* Se deve visualizzare e basta, non inserire una somma */}
        else if (scelta != 0) {
            cout << "\nInserisci una somma: ";
            cin >> somma;
        }

        switch (scelta) {

            case 1:
                conto.getMovimenti();
                break;
            case 2:
                conto.Preleva(somma);
                break;

            case 3:
                conto.Versa(somma);
                break;
        }


    }

    cout << "Hai effettuato " << conto.numeroVersamenti << " versamenti per un totale di " << conto.sommaVersata
         << endl;
    cout << "Hai effettuato " << conto.numeroPrelievi << " prelievi per un totale di " << conto.sommaPrelevata << endl;
    cout << "Saldo finale: " << conto.getSaldo();


}


