#include <iostream>
using namespace std;

int main () {

    int N;
    int fattoriale = 1;
    cout << "inserisci un numero e ne calcolero' il fattoriale usando il decremento: ";
    cin >> N;

    if (N < 0) {
        cout << "il fattoriale non e' definito per numeri negativi" << endl;
        return 1;
    }

    for (int i = N; i > 0; i--) {
        fattoriale *= i;
    }
    cout << "il fattoriale di " << N << " e': " << fattoriale << endl;

    return 0;
}