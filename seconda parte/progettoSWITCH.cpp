#include <iostream>
using namespace std;

int main() {

    char sesso;
    int x;
    cout << "sei maschio o femmina? (m/f) " << endl;
    cin >> sesso;
    cout << "quanti anni hai? " << endl;
    cin >> x;

    if ( x < 9 )
    {
        cout << "sei troppo giovane" << endl;
    }
    if ( sesso == 'm' && x >= 10 ) {
        switch (x) {
            case 10: cout << "sei un esordiente B";break;
            case 11: cout << "sei un esordiente B";break;
            case 12: cout << "sei un esordiente A";break;
            case 13: cout << "sei un esordiente A";break;
            case 14: cout << "sei nei ragazzi";break;
            case 15: cout << "sei nei ragazzi";break;
            case 16: cout << "sei nei ragazzi";break;
            case 17: cout << "sei nei cadetti";break;
            case 18: cout << "sei nei cadetti";break;
            case 19: cout << "sei nei juniores";break;
            case 20: cout << "sei nei juniores";break;
            default: cout << "sei nei seniores";break;
        }
    }
    if ( sesso == 'f' && x >= 9 ) {
        switch (x) {
            case 9: cout << "sei una esordiente B";break;
            case 10: cout << "sei una esordiente B";break;
            case 11: cout << "sei una esordiente A";break;
            case 12: cout << "sei una esordiente A";break;
            case 13: cout << "sei nei ragazzi";break;
            case 14: cout << "sei nei ragazzi";break;
            case 15: cout << "sei nei juniores";break;
            case 16: cout << "sei nei juniores";break;
            case 17: cout << "sei nei cadetti";break;
            case 18: cout << "sei nei cadetti";break;
            default: cout << "sei nei seniores";break;
        }
    }
    return 0;
}