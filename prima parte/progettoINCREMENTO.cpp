#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
    int i=0, j=0;

    cout <<"i = " << i << endl;
    cout <<"j = " << j << endl;

    i++;
    j--;

    cout <<"i dopo l'incremento e j dopo il decremento: " << endl;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;

    return 0;
}