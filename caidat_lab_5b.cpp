#include"thuvien_lab_5b.h"
void capNhat_Bien(int a,int b){
	if(a>b && a%3==0)
		a+=b-3;
	if(b>5)
		b+=b/5;
	cout<<"\nTrong ham cap nhat:a="<<a<<"b="<<b<<endl;
}
