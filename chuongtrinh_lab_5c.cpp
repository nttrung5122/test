#include"thuvien_lab_5c.h"
int main(){
	int h;
	do{
		cout<<endl<<"Nhap chieu cao tam giac so:";
		cin>>h;
	}while (h<=0);
	in_TamGiacSo(h);
	system("pause");
	return 0;
}
