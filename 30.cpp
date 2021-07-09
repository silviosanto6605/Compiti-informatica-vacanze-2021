#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0;
    float valore, somma = 0, media, maxScostamento = 0;

    vector<float> Scostamenti;           /*Creazione di un vettore */
    float *arr = new (nothrow) float(n); /*Creazione di un array con allocazione dinamica della memoria */

    cout << "Quanti valori vuoi inserire? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Inserisci un valore: "; /*Inserimento valori nell'array e calcolo somma */
        cin >> valore;
        arr[i] = valore;
        somma = somma + arr[i];
    }
    media = somma / n;

    /*Ciclo l'array per controllare tutti i valori */
    for (int i = 0; i < n; i++)
    {
        /*Se il valore è maggiore della media, sottrai alla media il valore e aggiungi il risultato alla coda dell'array */
        if (arr[i] <= media)
        {
            Scostamenti.push_back(media - arr[i]);
        }
        /*Se il valore è minore della media, sottrai valore la media e aggiungi il risultato alla coda dell'array */
        else if (arr[i] > media)
        {
            Scostamenti.push_back((arr[i] - media));
        }
    }
    for (int j = 0; j < Scostamenti.size(); j++) /* Ciclo per controllare il massimo scostamento */
    {
        if (Scostamenti[j] > maxScostamento)
        { /* Controlla se il valore è il maggiore e designalo come massimo */
            maxScostamento = Scostamenti[j];
        }
        else if (maxScostamento < Scostamenti[j])
        {
        } /* Altrimenti non fare niente*/
    }

    cout << "La media aritmetica " << (char)0x8a << " la seguente: " << media << endl;
    cout << "Il massimo scostamento " << (char)0x8a << " il seguente: " << maxScostamento << endl;

    /* Rimuovo l'array e pulisco il contenuto del vettore per liberare memoria */
    delete arr; 
    Scostamenti.clear();
    return 0;
}
