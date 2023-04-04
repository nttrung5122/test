#include"thuvien_lab_5c.h"
void lietke_SoNguyen(int n){
	int i;
	cout<<endl;
	for(i=1;i<=n;i++)
		cout<<i<<" ";
}
void in_TamGiacSo(int height){
		for(int i=height;i>=2;i--)
			lietke_SoNguyen(i);
		cout<<endl;
}
