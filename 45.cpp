#include <iostream>
#include "src/funzioni.h"


int main() {
  int a, b;

  cout << "Inserisci il primo numero: ";
  cin >> a;
  cout << "Inserisci il secondo numero: ";
  cin >> b;

  cout << "Il m.c.m. fra " << a << " e " << b << " e` ";

  if ((a == 0) || (b == 0))
    cout << "0";

  else {
    int m_c_d = mcd(a, b);
    cout << (a * b) / m_c_d;
  }

  cout << endl;
}


