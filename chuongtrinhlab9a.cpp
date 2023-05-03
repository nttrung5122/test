#include "thuvienlab9a.h"
int main()
{
    char str[100];
    cout << "\nNhap vao mot chuoi...";
    cin.getline(str, 100);
    cout << "\nChuoi nhap vao la:" << str;
    chuanHoa_Chuoi(str);
    cout << "\nChuoi sau khi cat khoang trang la: #" << str << " #";
    chuyen_Chuhoa(str);
    cout << "\nChuoi hoa la:" << str << endl;
    system("pause");
    return 0;
}
