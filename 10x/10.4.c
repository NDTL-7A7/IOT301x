#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    char str[20];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; ++i)
    {
        while ( !((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] == '\0')) )
        {
            for (j = i; str[j] != '\0'; ++j)
            {
                str[j] = str[j+1];
            }
            str[j] = '\0';
        }
    }
    puts(str);
    return 0;
}