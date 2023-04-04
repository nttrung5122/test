#include"thuvien_lab_5.h"
int main(){
	int k;
	do{
		cout<<endl<<"Nhap so nguyen duong:";
		cin>>k;
	}while(k<=0);
	lietke_SoNguyen(k);
	system("pause");
	return 0;
}
