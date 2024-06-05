#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", n | (1 << 4));
    return 0;
}