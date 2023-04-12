#include"thuvienlab6c.h"
int main(){
	int a,b;
	cout<<"\nNhap gia tri a: "<<endl;
	nhap_SoNguyen(a);
	cout<<"\nNhap gia tri b: "<<endl;
	nhap_SoNguyen(b);
	float x;
	int k= tim_Nghiem_PTBacNhat(a,b,x);
	if(k==-1)
		cout<<"\nPhuong trinh vo nghiem! ";
	else if(k==0)
		cout<<"\nPhuong trinh co vo so nghiem! ";	
	else//k=1
		cout<<"\nPhuong trinh co nghiem duy nhat x= "<<x<<endl;
		system("pause");
	return 0;
}
