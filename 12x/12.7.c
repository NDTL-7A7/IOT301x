#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 5;
    int y = 2;
    swap(&x, &y);
    printf("%d %d", x, y);
    return 0;
}