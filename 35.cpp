#include <iostream>

using namespace std;
int main () {

    float n = 0,m = 0;
    cout<<"Insersci una base: ";
    cin>>n;
    cout<<"Insersci un esponente: ";
    cin>>m;

    if (m>=0){
        cout<<pow(n,m);

    }
    else if (m<0){
        cout<<pow(1/n, abs(m));

    }

}