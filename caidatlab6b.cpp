#include"thuvienlab6b.h"
void nhap_SoNguyen(int &m){
	do{
		cout<<"\nNhap so nguyen duong ...";
		cin>>m;
	}while (m<=0);
}
long tinh_BieuThuc(int n){
	long s=0;
	for (int i=1;i<=n;i++)
	s+=(long)i;
	return s;
}

