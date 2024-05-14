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
	cout<<" sadece kentsel alanlarda çalışacaktır "<<endl;
	}
	if(cinsiyet=='e')
		if(yas>=20 & yas<=40){
			cout<<"çalışan her yerde çalışabilir "<<endl;
	}
	else if(yas>40 & yas<=60) {
		cout<<"çalışan sadece kentsel alanlarda çalışacaktır "<<endl;
	}
	else {
		cout<<"error"<<endl;
	}
return 0;
}
