#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char name[25][50], temp[25];
    printf("Nhap so luong ten:");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
        fgets(name[i], sizeof(name), stdin);

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= n - i; j++)
        {
            if (strcmp(name[j], name[j+1]) > 0)
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], temp);
            }
        }
    }
    
    for (i = 0; i <= n; i++)
        puts(name[i]);
    return 0;
}