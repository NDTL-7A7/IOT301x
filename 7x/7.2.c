#include <stdio.h>

int main()
{
    int a = 65;
    int b = 0;
    printf("So can doan la so co 2 chu so\n");
    while (b != a)
    {
        printf("Nhap so b");
        scanf("%d", &b);
    }
    printf("Xin chuc mung, ban da doan dung!\n");
    return 0;
}