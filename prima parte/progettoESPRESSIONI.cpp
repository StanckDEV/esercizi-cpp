#include <iostream>
#include <cmath> 

using namespace std;

int main ()
{ 
    int x, y;
    float lato1, lato2, altezza, volume, areabase , apotema1, apotema2, areaLaterale, areaTotale;

cout << "Dammi il numero che vuoi che assegno a x ";
    cin >> y;
    x=y;
    cout << "il numero che mi hai dato e' " << x << endl<<endl;

    cout << "Dammi un numero e io ti diro' il suo successivo ";
    cin >> x;
    y=x+1;
    cout << "il successivo di " << x << " e' " << y << endl << endl;


    cout << "Dammi il primo lato della base della piramide ";
    cin >> lato1;
    cout << "Dammi il secondo lato della base della piramide ";
    cin >> lato2;
    areabase = lato1 * lato2;
    cout << "l'area della base della piramide e' " << areabase << endl << endl;

    cout << "Dammi l'altezza della piramide ";
    cin >> altezza;
    volume = (areabase * altezza) / 3;
    cout << "Il volume della piramide e' " << volume << endl;

    apotema1 = sqrt(pow(lato2/2, 2) + pow(altezza, 2));
    apotema2 = sqrt(pow(lato1/2, 2) + pow(altezza, 2));

    areaLaterale = lato1 * apotema1 + lato2 * apotema2;
    areaTotale = areabase + areaLaterale;

    cout << "Il primo apotema della piramide e' " << apotema1 << endl;
    cout << "Il secondo apotema della piramide e' " << apotema2 << endl;
    cout << "l'area laterale della piramide e' " << areaLaterale << endl;
    cout << "l'area totale della piramide e' " << areaTotale << endl;

    return 0;

}