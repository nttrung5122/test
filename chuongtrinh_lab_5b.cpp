#include"thuvien_lab_5b.h"
int main (){
	int n,m;
	cout<<"\nNhap so nguyen thu nhat:";
	cin>>n;
	cout<<"\nNhap so nguyen thu hai:";
	cin>>m;
	cout<<"\nHai so nguyen nhap vao la:"<<n<<"\t"<<m<<endl;
	capNhat_Bien(n,m);
	cout<<"\nHai so nguyen cap nhat moi:"<<n<<"\t"<<m<<endl;
	system("pause");
	return 0;
}
