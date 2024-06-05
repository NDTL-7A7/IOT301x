#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("(%d + %d + %d + %d) / 4 = %d", a, b, c, d, (a + b + c + d)/4);
    return 0;
}