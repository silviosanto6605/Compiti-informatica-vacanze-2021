#include <iostream>


int calcMultipli(int partenza, int fine, int n){
    for(int i=partenza; i<fine; i++){

        if(i%n == 0){
            std::cout<<i<<std::endl;

        }


    }
    return 0;
    

}



int factorial(int n) {

    long double fattoriale = 1.0;


    if (n < 0){
        std::cout << "Non esiste il fattoriale di un numero negativo";
        return 0;
    }
        
    else {
        for(int i = 1; i <= n; ++i) {
            fattoriale *= i;
        }
        return fattoriale;    
    }

}









