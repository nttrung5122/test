#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,s=0;
	char thoat;
	do
	{
		cout<<"\nNhap a:";
		cin>>a;
		cout<<"\nNhap b:";
		cin>>b;
		cout<<"\nNhap c:";
		cin>>c;
		s=2*a+3*b+4*(a+c)*b;
		cout<<"\nGia tri bieu thuc can tinh la:"<<s<<endl;
		cout<<"Ban muon dung? Nhap Y or y de dung. Chon phim:";
		cin>>thoat;
	}
	while((thoat!='Y') && (thoat !='y'));
	system("pause");
	return 0;
}
