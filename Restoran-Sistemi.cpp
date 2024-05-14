#include <iostream>
#include <string>
using namespace std;
class Restoran {

public:

virtual void menuGoster() = 0;
virtual void siparisAl(string yemek) = 0;

};
class ItalRestoran : public Restoran {
public:
	void menuGoster() override {
		cout << "Ýtalyan restoranýnýn menüsü:" << endl;
		cout << "1. Pizza" << endl;
		cout << "2. Makarna" << endl;
		cout << "3. Salata" << endl;

		int yemekSecim;
		cout << "Hangi yemeði seçmek istersiniz? ";
		cin >> yemekSecim;
		string yemek;
		
		switch (yemekSecim) {
			case 1:
				yemek = "Pizza";
				break;
			case 2:
				yemek = "Makarna";
				break;
			case 3:
				yemek = "Salata";
				break;
			default:
			cout << "Geçersiz seçim." << endl;
			return;
		}
	siparisAl(yemek);
}
	void siparisAl(string yemek) override {
		cout << "Ýtalyan restoranýndan " << yemek << " sipariþi alýndý." << endl;
		}
	};
	
class CinRestoran : public Restoran {
public:
	
	void menuGoster() override {
	cout << "Çin restoranýnýn menüsü:" << endl;
	cout << "1. Tavuklu Noodle" << endl;
	cout << "2. Kung Pao Tavuk" << endl;
	cout << "3. Ordek" << endl;

	int yemekSecim;
	cout << "Hangi yemeði seçmek istersiniz? ";
	cin >> yemekSecim;

	string yemek;
	
	switch (yemekSecim) {
		case 1:
			yemek = "Tavuklu Noodle";
			break;
		case 2:
			yemek = "Kung Pao Tavuk";
			break;
		case 3:
			yemek = "Ordek";
			break;
		default:
		cout << "Geçersiz seçim." << endl;
		return;
		}
	}
	siparisAl(yemek);
}

	void siparisAl(string yemek) override {
		cout << "Çin restoranýndan " << yemek << " sipariþi alýndý." << endl;
		}
	};
class MeksikaRestoran : public Restoran {
public:

	void menuGoster() override {
		cout << "Meksika restoranýnýn menüsü:" << endl;
		cout << "1. Tacos" << endl;
		cout << "2. Nachos" << endl;
		cout << "3. Guacamole" << endl;

	int yemekSecim;
	cout << "Hangi yemeði seçmek istersiniz? ";
	cin >> yemekSecim;

	string yemek;

	switch (yemekSecim) {
		case 1:
			yemek = "Tacos";
			break;
		case 2:
			yemek = "Nachos";
			break;
		case 3:
			yemek = "Guacamole";
			break;
		default:
		cout << "Geçersiz seçim." << endl;
		return;
	}
	siparisAl(yemek);
	}
	void siparisAl(string yemek) override {
		cout << "Meksika restoranýndan " << yemek << " sipariþi alýndý." << endl;
		}
	};
int main() {
	Restoran* restoran;
	int secim;
	cout << "Restoran seçin: " << endl;
	cout << "1. Ýtalyan Restoraný" << endl;
	cout << "2. Çin Restoraný" << endl;
	cout << "3. Meksika Restoraný" << endl;
	cout << "Seçiminizi yapýn: ";
	cin >> secim;

	if (secim == 1) {
		restoran = new ItalRestoran();

	} else if (secim == 2) {
		restoran = new CinRestoran();
	} else if (secim == 3) {
		restoran = new MeksikaRestoran();
	}else {
		cout << "Geçersiz seçim." << endl;
		return 0;
	}
	restoran->menuGoster();
	delete restoran;
	return 0;
}
	
	
	
	
