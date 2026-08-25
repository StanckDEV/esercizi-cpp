#include <iostream>
#include <cmath>

using namespace std;

int main ()
{       
    int x, y;
    float altezza, raggio, volume, areabase, areaLaterale, areaTotale;
    
    cout << "Dimmi un numero e io ti diro' il suo precedente ";
    cin >> x;
    x=x-1;
    cout << "il precedente e' " << x << endl;

    cout << "Dimmi il raggio del cilindro ";
    cin >> raggio;
    cout << "Dimmi l'altezza del cilindro ";
    cin >> altezza;
    areabase = 3.14 * pow(raggio, 2);
    areaLaterale = 2 * 3.14 * raggio * altezza;
    areaTotale = 2 * areabase + areaLaterale;
    volume = areabase * altezza;

    cout << "L'area della base e' " << areabase << endl;
    cout << "L'area laterale e' " << areaLaterale << endl;
    cout << "L'area totale e' " << areaTotale << endl;
    cout << "Il volume e' " << volume << endl;

    return 0;
}