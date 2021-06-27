#include <iostream>


int calcMultipli(int partenza, int fine, int n){
    for(int i=partenza; i<fine; i++){

        if(i%n == 0){
            std::cout<<i<<std::endl;

        }


    }
    return 0;
    


}


