#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int x = 5;
    int y = 2;
    int sum = add(x, y);
    printf("%d\n", sum);
    return 0;
}