#include <iostream>

using namespace std;

#define bus 5
#define eco 5

int ucak[eco][bus] = {0}; 

void rezervasyon(int secim[], int size) {
    for (int i = 0; i < size; ++i) {
        if (secim[i] == 0) { 
            secim[i] = 1; 
            cout << "Rezervasyonunuz tamamlandi. Koltuk numaraniz: " << i + 1 << endl;
            return;
        }
    }
    
    cout << "Maalesef bu bolumde bos koltuk yok." << endl;
}

int main() {
    int choice;
    while (true) {
        cout << "Lutfen bir secim yapin:" << endl;
        cout << "1. Business class icin" << endl;
        cout << "2. Economy icin" << endl;
        cout << "0. Cikis" << endl;
        cin >> choice;

        if (choice == 1) {
            rezervasyon(ucak[0], bus);
        } else if (choice == 2) {
            rezervasyon(ucak[1], eco);
        } else if (choice == 0) {
            break;
        } else {
            cout << "Hatali secim yaptiniz." << endl;
        }
    }

    return 0;
}
