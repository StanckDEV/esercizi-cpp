#include <iostream>

using namespace std;

int main () 
{
    int tempo , secondi , minuti , ore , giorni;

    cout << "Inserisci il tempo in secondi: " << endl<<endl;
    cin >> tempo ;

    minuti = tempo / 60 ;
    secondi = tempo % 60 ;
    ore = minuti / 60 ;
    minuti = minuti % 60 ;
    giorni = ore / 24 ;
    ore = ore % 24 ;

    cout << "Il tempo inserito corrisponde a: " << endl;
    cout << giorni << " giorni, " << ore << " ore, " << minuti << " minuti e " << secondi << " secondi." << endl;

    return 0;
}