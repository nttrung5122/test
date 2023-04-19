#include "thuvienlab7b.h"
void nhap_SoPhanTu (int &m) {
	 do{
		cout << "\nNhap so phan tu cua mang...";
		cin >> m;
	} while (m <= 0 || m>KTM);
}
void nhap_Mang(int b[], int m){
	int i;
	cout << "\nNhap gia tri cho mang:";
	for (i=0; i<m; i++){
		cout << "\nNhap phan tu thu :" <<i<< ";";
		cin >> b[i];
	}
}
void xuat_Mang(int b[], int m){
	cout << "\nCac phan tu mang la:" << endl;
	for (int i = 0; i<m; i++)
		 cout << b[i] << "\t";
	cout << endl;
}
int kiemTra_HoanThien(int k){
	int sum = 0;
	for (int i=1; i<k; i++)
		if (k%i == 0)
			sum += i;
	if (sum == k) 
		 return 1;
	return 0;
}
void xuat_SoHoanThien(int b[], int m){
	for (int i = 0; i<10; i++)
		 if (kiemTra_HoanThien (b[i]) == 1)
			cout << b[i] << "\t";
	cout << endl;
}
int tong_PTuDuong (int b[], int m){
	int sum = 0;
	for (int i = 0; i<m; i++)
	 	if (b[i]>0)
			sum += b[i];
	return sum;
}
int tim_Max (int b[], int m){
	int max = b[0];
	for (int i = 1; i<m; i++)
		if (max<b[i])
			max = b[i];
	return max;
}
void hienThi_Menu()
{
	cout											   <<
"\n===================================================";
	cout << "\nCac chuc nang chuong trinh." << endl;
	cout << "\n1. Nhap mang so nguyen." << endl;
	cout << "\n2. Xuat cac phan tu cua mang." << endl;
	cout << "\n3. Cac phan tu la so hoan thien cua mang." << endl;
	cout << "\n4. Tinh tong cac phan tu duong co trong mang." << endl; 
	cout << "\n5. Gia tri lon nhat cua mang." << endl;
	cout << "\n0. Dung chuong trinh." << endl; 
	cout											   <<
"\n===================================================";
}
void chon_Menu (int b[], int m)
{
	int chon;
	do{
		cout << "\nNhap 1 so nguyen de lua chon chuc nang...";
		cin >> chon;
		switch (chon)
		{
		case 1:
			system("cls");
			nhap_Mang(b, m);
			hienThi_Menu();
			break;
		case 2:
			system("cls");
			xuat_Mang(b, m);
			hienThi_Menu();
			break;
		case 3: 
			system("cls");
			cout << "\nCac hoan thien co trong mang la:" << endl;
		 	xuat_SoHoanThien(b, m);
			hienThi_Menu();
			break;
		case 4:
			system("cls");
			cout << "\nTong cac so duong co trong mang la:";
			cout << tong_PTuDuong (b, m) << endl;
			hienThi_Menu();
			break;
		case 5:
			system("cls");
			cout << "\nGia tri lon nhat la:" <<tim_Max(b, m);
			hienThi_Menu();
			break;
		default:
			break;
		}
	} while (chon != 0);
}
