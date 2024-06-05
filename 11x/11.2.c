#include <stdio.h>

int main()
{
    char x = 0;
    printf("%d\n", x);
    char *px = &x;
    *px = 12;
    printf("%d\n", x);
    return 0;
}