#include <iostream>

using namespace std;

int main() 
{
        int numero;
        char lettera;
        float decimale;
        bool valorelogico;

cout << "dammi un numero intero" << endl;
    cin >> numero;
    cout << "il numero che mi hai dato e' " << numero << endl<<endl;

    cout << "dammi una lettera" << endl;
    cin >> lettera;
    cout << "la lettera che mi hai dato e' " << lettera << endl<<endl;

    cout << "dammi un numero decimale" << endl;
    cin >> decimale;
    cout << "il numero decimale che mi hai dato e' " << decimale << endl<<endl;

    cout << "dammi un valore logico (0 o 1)" << endl;
    cin >> valorelogico;
    cout << "il valore logico che mi hai dato e' " << valorelogico << endl<<endl;

    return 0;

}