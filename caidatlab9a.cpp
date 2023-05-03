#include "thuvienlab9a.h"
void chuyen_Chuhoa(char chuoi[])
{
    for (unsigned int i = 0; i < strlen(chuoi); i++){
//        chuoi[i] = toupper(chuoi[i]); 
		if (chuoi[i]=='a')
		{
			chuoi[i]=toupper(chuoi[i]);
		}
		else
		{
			chuoi[i]=tolower(chuoi[i]);
		}
	}
			
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
        // ?
    }
    // cat bo nhung khoang trang cuoi chuoi |
    while (chuoi[strlen(chuoi) - 1] == ' ')
    {
        chuoi[strlen(chuoi) - 1] = '\0';
    }
    // cat bo nhung khoang trang o giua chuoi
    for (i = 0; i < strlen(chuoi); i++)
        if (chuoi[i] == ' ')
            while (chuoi[i + 1] == ' ')
            {
                // tinh tien chuoi phia sau len
                for (unsigned int j = i + 1; j < strlen(chuoi); j++)
                    chuoi[j] = chuoi[j + 1];
                chuoi[strlen(chuoi)] = '\0';
            }
}

