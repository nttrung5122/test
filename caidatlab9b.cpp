#include "thuvienlab9b.h"
void chuyen_Chuhoa(char chuoi[])
{
    for (unsigned int i = 0; i < strlen(chuoi); i++)
        chuoi[i] = toupper(chuoi[i]); //?
}
// hoan thien cac ham con tai day
void chuanHoa_Chuoi(char chuoi[])
{
    unsigned int i;
    // cat bo nhung khoang trang dau chuoi
    while (chuoi[0] == ' ')
    {
        for (unsigned int j = 1; j < strlen(chuoi); j++)
            chuoi[j - 1] = chuoi[j];
        //?
        chuoi[strlen(chuoi) - 1] = '\0';
        //?
    }
    // cat bo nhung khoang trang cuoi chuoi
    while (chuoi[strlen(chuoi) - 1] == ' ')
    {
        chuoi[strlen(chuoi) - 1] = '\0';
    }
    // cat bo nhung khoang trang o giua chuoi
    for (i = 0; i < strlen(chuoi); i++)
        if (chuoi[i] == ' ')
            while (chuoi[i + 1] = ' ')
            {
                // tinh tien chuoi phia sau len
                for (unsigned int j = i + 1; j < strlen(chuoi); j++)
                    chuoi[j] = chuoi[j + 1];
                chuoi[strlen(chuoi)] = '\0';
            }
} // dem so ky tu co trong chuoi
int tim_Kitu(char chuoi[], char c)
{
    int dem = 0;
    for (int i = 0; i < strlen(chuoi); i++)
        if (chuoi[i] == c)
            dem++;
    return dem;
}
// kiem tra chuoi doi xung; co tra ve 1; ko tra ve 0
int kt_ChuoiDoixung(char chuoi[])
{
    int len = strlen(chuoi);
    int i = 0;
    while (chuoi[i] == chuoi[len - i - 1] && i < len / 2)
        i++;
    if (i == len / 2)
        return 1;
    else
        return 0;
}
void chuyen_kituM_hoa(char chuoi[])
{
    for (int i = 0; i < strlen(chuoi); i++)
        if (chuoi[i] == 'm')
            chuoi[i] = toupper(chuoi[i]);
        else
            chuoi[i] = tolower(chuoi[i]);
}
void chuyen_ChuThuong(char chuoi[])
{
    for (int i = 0; i < strlen(chuoi); i++)
        chuoi[i] = tolower(chuoi[i]);
}

