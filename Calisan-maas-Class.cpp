#include <iostream>
using namespace std;
class Calisan {
protected:
	string adSoyad;
	double saatlikUcret;
	double calismaSaati;
	int izinGunleri;

public:
	
	Calisan() {}
	void bilgileriAl() {
		cout << "Bilgileri girin:" << endl;
		cout << "Ad Soyad: ";
		cin >> adSoyad;
		cout << "Saatlik Ucret: ";
		cin >> saatlikUcret;
		cout << "Calisma Saati: ";
		cin >> calismaSaati;
	}
	void izinAl() {
		cout << "Izin Gunleri: ";
		cin >> izinGunleri;
	}
	double maasHesapla() {
		return saatlikUcret * calismaSaati;
	}
	double izinIndirimiHesapla(int izinGunleri) {
		return izinGunleri * saatlikUcret * calismaSaati;
	}
};

class Mudur : public Calisan {
private:
	double primOrani;
	int izinGunleri;

public:
	Mudur() {}
	void bilgileriAl() {
		Calisan::bilgileriAl();
		cout << "Mudur prim orani ve izin gunleri girin:" << endl;
		cout << "Prim Orani: ";
		cin >> primOrani;
	}
	void izinAl() {
		cout << "Izin Gunleri: ";
		cin >> izinGunleri;
	}
	double maasHesapla() {
		double maas = Calisan::maasHesapla();
		double primliMaas = maas + (maas * primOrani);
		double izinIndirimi = Calisan::izinIndirimiHesapla(izinGunleri);
		return primliMaas - izinIndirimi;
	}
};
int main() {
	Calisan calisan1;
	calisan1.bilgileriAl();
	calisan1.izinAl();
	
	Mudur mudur1;
	mudur1.bilgileriAl();
	mudur1.izinAl();
	cout << "Calisan maasi: " << calisan1.maasHesapla() <<endl;
	cout << "Mudur maasi: " << mudur1.maasHesapla() << endl;
return 0;
}
