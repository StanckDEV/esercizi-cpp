#include <iostream>
using namespace std;

int main() {
    int N;
    int somma = 0;

    cout << "Inserisci un numero e ti diro' la somma dei numeri pari inferiori a esso: ";
    cin >> N;

    for (int i = 2; i < N; i += 2) {
        somma += i;
    }

    cout << "La somma dei numeri pari inferiori a " << N << " e': " << somma << endl;

    return 0;
}