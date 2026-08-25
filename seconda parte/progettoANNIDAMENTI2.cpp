#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "scrivi un numero intero positivo: " << endl;
    cin >> n;

    if ( n < 10 )   
    {
        cout << "il numero e' inferiore a 10" << endl;
    }

    if (n > 20) 
    {
        cout << "il numero e' maggiore di 20" << endl;
    }

    if ( n >= 10 && n <= 20 )
    {
        cout << "il numero e' tra 10 e 20" << endl;
    }
    

    return 0;
}