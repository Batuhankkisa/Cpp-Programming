#include <iostream>
using namespace std;
void goster(int x[])
{
	for(int i=0;i<5;i++){
		cout<<x[i]<<" ";
	}
}
int main()
{
	int a[10],b[5],c[5];
	for(int i=0;i<10;i++){
		cout<<i+1<<".sayi giriniz";
		cin>>a[i];
	}
	for(int i=0;i<=4;i++){
	b[i]=a[i];
	}
int j=0;
for(int i=5;i<10;i++){
		c[j]=a[i];
		j++;
	}
goster(b);
cout<<endl;
goster(c);
return 0;
}
