#include <iostream>

using namespace std;

int main() {

    char scelta;

    cout << "vuoi continuare? (s/n): ";
    cin >> scelta;

    if (scelta == 's' || scelta == 'S') {
        while (scelta == 's' || scelta == 'S') {
            cout << "vuoi continuare? (s/n): ";
            cin >> scelta;
        }
    }
    else if (scelta == 'n' || scelta == 'N') {
        return 0;
    }
}
