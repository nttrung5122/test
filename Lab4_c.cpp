#include "iostream"
using namespace std;
int main()
{
	int n;
	do
	{
		cout<<"\nNhap n>0:";
		cin>>n;
	}
	while(n<=0);
	if (n==2)
		cout<<"\n"<<n<<"la so nguyen to.";
	else if (n>2)
	{
		int i=1;
		do
		{
			i++;	
		}
		while ((i<n) && (n%i!=0));
			if(i==n)
				cout<<"\n"<<n<<"la so nguyen to.";
			else
				cout<<"\n"<<n<<"khong la so nguyen to.";
	}
	else 
		cout<<"\nSo nguyen nhap vao <2.";
	system("pause");
	return 0;
}
