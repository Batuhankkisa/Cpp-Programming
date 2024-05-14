#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Eþya sýnýfý
class Esya {

private:
	string ad;
	double fiyat;
	int stokAdeti;

public:
	Esya() {
	ad = "";
	fiyat = 0.0;
	stokAdeti = 0;
	}
	string AdiAl() const {
		return ad;
	}
	double FiyatiAl() const {
		return fiyat;
	}
	int StokAdetiAl() const {	
	return stokAdeti;
	}
	void StokAdetiGuncelle(int yeniStokAdeti) {
	stokAdeti = yeniStokAdeti;
	}
	
	void StokDurumunuYazdir() const {
		cout << "Stok Adeti: " << stokAdeti << endl;
	}
	
	void BilgileriAl() {
		cout << "Eþya Adi: ";
		cin.ignore();
		getline(cin, ad);
		cout << "Fiyati: ";
		cin >> fiyat;
		cout << "Stok Adeti: ";
		cin >> stokAdeti;
		}
};
	void EsyalariAl(vector<Esya>& esyalar, int esyaSayisi) {
		for (int i = 0; i < esyaSayisi; i++) {
			Esya esya;
			esya.BilgileriAl();
			esyalar.push_back(esya);

			cout << "Esya Eklendi!" << endl;
			cout << "------------------------" << endl;
		}
	}
	
	void StokAdetiGuncelle(vector<Esya>& esyalar) {
		int esyaIndex;
		cout << "Hangi esyanin stok adedini guncellemek istersiniz? (0 - " << esyalar.size() - 1 << "): ";
		cin >> esyaIndex;

	if (esyaIndex >= 0 && esyaIndex < esyalar.size()) {
		int yeniStokAdeti;
		cout << "Yeni Stok Adeti: ";
		cin >> yeniStokAdeti;

		esyalar[esyaIndex].StokAdetiGuncelle(yeniStokAdeti);
		cout << "Stok Adeti Guncellendi!" << endl;
		cout << "Guncellenmis Stok Durumu: " << endl;
		esyalar[esyaIndex].StokDurumunuYazdir();
	
	} else {
		cout << "Gecersiz indeks!" << endl;	
	}
}
int main() {
	vector<Esya> esyalar;	
	int esyaSayisi;
	cout << "Kac adet esya gireceksiniz? ";
	cin >> esyaSayisi;

	EsyalariAl(esyalar, esyaSayisi);
// Vektördeki eþyalarý yazdýrma
	for (const Esya& esya : esyalar) {
		cout << "Esya Adi: " << esya.AdiAl() << endl;
		cout << "Fiyati: " << esya.FiyatiAl() << endl;
		esya.StokDurumunuYazdir();
		cout << "------------------------" << endl;
	}
	StokAdetiGuncelle(esyalar);
return 0;
}

