#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "scrivi un numero intero positivo: " << endl;
    cin >> n;

    if ( !(n > 0) ) 
    {

        cout << "il numero non e' positivo" << endl;
        if (n == 0) 
        {
            cout << "il numero e' zero" << endl;
        }
        if ( n < 0 )
        {
            cout << "il numero e' negativo" << endl;
        }
    }

    return 0;
}