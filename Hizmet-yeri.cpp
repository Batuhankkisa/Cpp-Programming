#include<iostream>
using namespace std;
int main() {
	int yas;
	char cinsiyet,ev;
	
	cout<<"yas giriniz"<<endl;
	cin>>yas;
	
	cout<<"cinsiyet giriniz (e-k)"<<endl;
	cin>>cinsiyet;
	
	cout<<"Evlilik durumu"<<endl;
	cin>>ev;
	
	if(cinsiyet=='k') {
	cout<<" sadece kentsel alanlarda �al��acakt�r "<<endl;
	}
	if(cinsiyet=='e')
		if(yas>=20 & yas<=40){
			cout<<"�al��an her yerde �al��abilir "<<endl;
	}
	else if(yas>40 & yas<=60) {
		cout<<"�al��an sadece kentsel alanlarda �al��acakt�r "<<endl;
	}
	else {
		cout<<"error"<<endl;
	}
return 0;
}
