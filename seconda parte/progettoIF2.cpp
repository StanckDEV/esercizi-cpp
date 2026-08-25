#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "scrivi un numero intero positivo: " << endl;
    cin >> n;

    if (n % 2 == 0) {
        cout << "il numero e' pari" << endl;
    } 
    else {
        cout << "il numero e' dispari" << endl;
    }

    if ( n % 5 == 0 )
    {
        cout << "il numero e' multiplo di 5" << endl;
    } 
    
    return 0;

}