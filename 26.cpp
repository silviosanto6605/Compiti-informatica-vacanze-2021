#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    int arrsize = 0, contaSottopeso = 0, contaSovrappeso = 0, contaPesoCorretto = 0;
    float peso,pesoTotaleNorma,pesoTotaleFuoriNorma;
    const float PESORNORMA = 1.0;


    cout<<"Quanti pacchetti si hanno? ";
    cin>>arrsize;


    float *pesi = new float[arrsize]; 
    


    for(int i=0; i<arrsize;i++){

        cout<<"Inserisci un peso: ";
        cin>>peso;
        if(peso == 0){i=arrsize+1;}
        else{
            pesi[arrsize] = peso;
        }

    }   


    for(int j=0; j<arrsize; j++){
        if(pesi[j]>PESORNORMA+(PESORNORMA*100)/2){ /*fuori norma - sovrappeso*/
            contaSovrappeso += 1;
            pesoTotaleFuoriNorma += pesi[j];


        } 
        
        else if(pesi[j]<PESORNORMA+(PESORNORMA*100)/2){ /*fuori norma - sottopeso*/
            contaSottopeso += 1;
            pesoTotaleFuoriNorma += pesi[j];


        }
        
        else { /*a norma */
            contaPesoCorretto += 1;
            pesoTotaleNorma += pesi[j];


        }




    }


    cout<<"Pacchetti con peso corretto: " << contaPesoCorretto<<endl;
    cout<<"Peso totale della merce con peso a norma: " << pesoTotaleNorma<<endl<<endl;


    cout<<"Pacchetti sottopeso: " << contaSottopeso<<endl;
    cout<<"Pacchetti sovrappeso: " << contaSovrappeso<<endl;
    cout<<"Peso totale della merce con peso non a norma: " << pesoTotaleFuoriNorma<<endl<<endl;
    
}

