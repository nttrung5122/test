#include"thuvienlab7a.h"
void nhap_Mang(int b[]){
	int i;
	cout<<"Nhap gia tri cho mang:";
	for(i=0;i<10;i++){
			cout<<"\nNhap phan tu thu :" <<i<< ":";
			cin>>b[i];
	}
}
void xuat_Mang(int b[]){
	cout<<"\nCac phan tu mang la: ";
	for(int i=0;i<10;i++)
		cout<<b[i]<<"\t";
	cout<<endl;
}
void xuat_SoDuong(int b[]){
	for (int i = 0; i<10; i++) 
		if (b[i]>0)
		 cout << b[i] << "\t";
	cout << endl;
} 
 void hienThi_Menu(){
	cout                                             << 
"\n==================================================";
	cout << "\nCac chuc nang chuong trinh." <<endl;
	cout << "\n1. Nhap mang so nguyen." <<endl;
	cout << "\n2. Xuat cac phan tu cua mang." << endl;
	cout << "\n3. Xuat cac phan tu duong cua mang."<<endl;
	cout << "\ne. Dung chuong trinh." <<endl;
	cout                                              <<
"\n==================================================";
} 
void chon_Menu (int b[]){ 
	int chon;
	do{	
		cout << "\nNhap 1 so nguyen de lua chon chuc nang..."; 
		cin >> chon;
		switch (chon){
		case 1: 
			system("cls"); 
			nhap_Mang(b);
			hienThi_Menu();
			break;
		case 2:
			system("cls");
			xuat_Mang(b);
			hienThi_Menu();
			break;
		case 3:
			system("cls");
			cout << "\nCac so duong co trong mang la:" << endl;
			xuat_SoDuong(b);
			hienThi_Menu();
			break;
		default:
			break;
		}
 	} while (chon != 0);
}
