#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main () {

    int scelta;

    do {
        do {
            cout<<"+------------------------------+"<<endl;
            cout<<"|                              |"<<endl;
            cout<<"|   1-Massimo tra due numeri   |"<<endl;
            cout<<"|   2-Media di due numeri      |"<<endl;
            cout<<"|   3-Volume di una sfera      |"<<endl;
            cout<<"|   4-E' una vocale?           |"<<endl;
            cout<<"|                              |"<<endl;
            cout<<"|   0-Esci                     |"<<endl;
            cout<<"+------------------------------+"<<endl;
            
            cin >> scelta;
            
            if (scelta<0 || scelta>4) {
                cout<<"la scelta deve essere un numero tra 0 e 4 "<<endl;
                system("pause");
                system("cls");
            }
        } while (scelta < 0 || scelta > 4); // ciclo interno: si ripete finché la scelta non è valida
        system("cls"); 
        switch (scelta) {
            case 1: {
                int num1, num2, massimo;
                cout << "Dammi il primo numero "<< endl;
                cin>>num1;
                cout << "Dammi il secondo numero "<< endl;
                cin >> num2;
                if (num1>num2) {
                    massimo = num1;
                }
                else {
                    massimo = num2;
                }
                cout<<"Il massimo tra i due numeri e' " << massimo << endl;
                system ("pause");
                break;
            }
            case 2: {
                int num1, num2;
                float media;
                cout<<"Dammi il primo numero "<<endl;
                cin>>num1;
                cout<<"Dammi il secondo numero "<<endl;
                cin>>num2;
                media = (float) (num1+num2)/2;
                cout<<"La media tra i due numeri e' " << media << endl;
                system ("pause");
                break;
            }
            case 3: {
                double raggio, volume;
                cout<<"Dammi il raggio della sfera "<<endl;
                cin>>raggio;
                volume = 4.0/3.0*M_PI*pow(raggio,3);
                cout<<"Il volume della sfera e' "<< volume << endl;
                system("pause");
                break;
            }
            case 4: {
                char lett;
                cout<<"scrivi una lettera "<<endl;
                cin>>lett;
                if (lett=='a'||lett=='e'||lett=='i'||lett=='o'||lett=='u'||lett=='A'||lett=='E'||lett=='I'||lett=='O'||lett=='U') {
                    cout<<"la lettera e' una vocale "<<endl;
                }
                else {
                    cout<<"la lettera non e' una vocale " << endl;
                }
            system("pause");
            break;
            }
            case 0: break;
        }
        system ("cls");
    } while (scelta !=0); //ciclo esterno:si ripete se la scelta è diversa da zero
    
    return 0;
}