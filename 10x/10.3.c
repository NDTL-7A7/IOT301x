#include <stdio.h>

int main()
{
    char str[80];
    char search[20];
    int c1 = 0;
    int c2 = 0;
    int i, j;
    int found = 0;
    
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    printf("Nhap chuoi con: ");
    fgets(search, sizeof(search), stdin);

    while (str[c1] != '\0')
    {
        c1++;
    }
    c1--;

    while (str[c2] != '\0')
    {
        c2++;
    }
    c2--;

    if (c1 < c2)
    {
        printf("Khong xet truong hop chuoi con lon hon chuoi da cho.\n");
        return 1;
    }

    for (i = 0; i <= c1 - c2; i++)
    {
        for (j = i; j < i + c2; j++)
        {
            found = 1;
            if (str[j] != search[j - i])
            {
                found = 0;
                break;
            }
        }

        if (found = 1)
            break;
    }

    if (found == 1)
        printf("Chuoi con xuat hien trong chuoi.\n");
    else
        printf("Chuoi con khong xuat hien trong chuoi.\n");
    return 0;
}