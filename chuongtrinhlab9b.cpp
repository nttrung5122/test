#include "thuvienlab9b.h"
int main()
{
    char str[100];
    cout << "\nNhap vao mot chuoi...";
    cout << "\nChuoi nhap vao la:" << str;
    cin.getline(str, 100);
    chuanHoa_Chuoi(str);
    cout << "\nChuoi sau khi cat khoang trang la:#"
         << str << "#";
    chuyen_ChuThuong(str);
    cout << "\nChuoi ki tu thuong la:" << str << endl;
    chuyen_kituM_hoa(str);
    cout << "\nChuyen tat ca ki tu M thanh in hoa la : " << endl;
    cout << str << endl;
    cout << "\nSo ki tu N co trong chuoi la: " << tim_Kitu(str, 'N');
    if (kt_ChuoiDoixung(str))
        cout << "\nchuoi doi xung\n";
    else
        cout << "\nChuoi khong doi xung\n";
    system("pause");
    return 0;
}
