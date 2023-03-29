#include<iostream>
using namespace std;
int main ()
{
	int n,i,sum=0;
	do
	{
	cout<<"\nNhap so nguyen n:";
	cin>>n;
	}
	while (n<=0);
	for(i=1;i<=n;i++)
	sum+=i;
	cout<<"\nTong can tinh la: "<<sum<<endl;
	system("pause");
	return 0;
}

