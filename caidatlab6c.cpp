#include"thuvienlab6c.h"
void nhap_SoNguyen(int &m){
	do{
		cout<<"\nNhap so nguyen duong...";
		cin>>m;
	}while(m<=0);
}
int tim_Nghiem_PTBacNhat(int a, int b, float &t){
	if(a==0){
		if(b==0)
			return 0;
		else 
			return -1;
	}
	else{
		t=(float)-b/a;
		return 1;
	}
}
