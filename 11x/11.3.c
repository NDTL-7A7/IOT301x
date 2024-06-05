#include <stdio.h>

int main()
{
    int x = 5;
    int y = 0;

    int *px = &x;
    int *py = &y;

    if (*px > *py)
    {
        printf("x lon hon y\n");     
    }
    else if (*px < *py)
    {
        printf("x nho hon y\n");     
    }
    else
    {
        printf("x bang y\n");     
    }
    return 0;
}