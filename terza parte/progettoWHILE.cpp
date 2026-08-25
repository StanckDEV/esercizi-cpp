#include <iostream>
using namespace std;

int main () {

    int num , fattoriale = 1;

    cout << "inserisci un numero e ne calcolero' il fattoriale: ";
    cin >> num;

    int i = num;
    while (i > 1) {
        fattoriale = fattoriale * i;
        i--;
    }

    cout << "il fattoriale di " << num << " e': " << fattoriale << endl;

    return 0;

}