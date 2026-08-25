#include <iostream>
using namespace std;

int main () {

    int num, somma = 0;
    cout << "faccio la somma dei numeri che mi dai "<< endl;
    cout << "inserisci un numero (0 per terminare):";
    cin >> num;
    while (num != 0) {
        somma = somma + num;
        cin >> num;
    }
    cout << "la somma dei numeri inseriti e': " << somma << endl;
    return 0;
}