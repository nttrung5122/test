#include"lab6.h"
int main(){
    int a,b;
    cout<<"\n Nhap so a:";
    cin>>a;
     cout<<"\n Nhap so b:";
    cin>>b;
    cout<<"\nGia tri truoc khi goi ham hoanvi la: ";
    cout<<"a= "<<a<<"b= "<<b<<endl;
    hoanVi(a,b);
    cout<<"\nGia tri sau khi hoan doi a va b la: ";
    cout<<"a= "<<a<<"b= "<<b<<endl;
    system("pause");
    return 0;
}
