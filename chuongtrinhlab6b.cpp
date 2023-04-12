#include"thuvienlab6b.h"
int main(){
	int n;
	n=0;
	nhap_SoNguyen(n);
	long s = tinh_BieuThuc(n);
	cout<<"\nGia tri bieu thuc la: "<<s<<endl;
	system("pause");
return 0;
}
