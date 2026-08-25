#include <iostream>
using namespace std;

int main () {

    int x, y;
    cout << "scrivi due numeri interi diversi: " << endl;
    cin >> x >> y;

    if (x > y) {
        cout << x << " e' maggiore di " << y << endl;
    }
    if (x < y) {
        cout << x << " e' minore di " << y << endl;
    }

    return 0;
    
}