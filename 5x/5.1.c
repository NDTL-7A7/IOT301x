#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("Bit 3%sbang 1", ((n >> 3) & 1) ? " " : " khong ");
    return 0;
}