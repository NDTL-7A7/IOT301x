#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    int *px = &x;
    int *py = &y;

    printf("Nhap so thu nhat: ");
    scanf("%d", px);
    printf("Nhap so thu hai: ");
    scanf("%d", py);
    printf("Tong cua %d va %d la: %d", *px, *px, (*px + *py));

    return 0;
}