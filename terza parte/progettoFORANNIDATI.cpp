#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {

    cout << "simulazione del funzionamento di un orologio" << endl;
    for (int i=0; i<24; i++) {
        for (int j=0; j<60; j++) {
            for (int k=0; k<60; k++) {
                cout << i << ":" << j << ":" << k << endl;
                system("cls");
            }
        cout<<"minuti trascorsi: "<<j+1<<".chiudi la finestra per terminare il programma"<<endl;
        system("pause");
        }
        cout<<"ore trascorse: "<<i+1<<".chiudi la finestra per terminare il programma"<<endl;
        system("pause");
    }
    
    return 0;

}