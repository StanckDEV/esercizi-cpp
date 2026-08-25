#include <iostream>
using namespace std;

int main() {
    int n;
    int errori = 0;
    do {
        cout << "dammi un numero intero positivo: ";
        cin >> n;
        if (n <= 0) {
            cout << "il numero che mi hai dato non e' positivo." << endl;
            errori++;
            system("pause");
            cout << endl;
        }
    } while (n <= 0);
    cout << "il numero che mi hai dato e' positivo: " << n << endl;
    cout << "hai commesso " << errori << " errori." << endl;
    return 0;
}