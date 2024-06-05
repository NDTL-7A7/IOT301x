#include <stdio.h>

void find_fact(int n, int *f)
{
    int i;
    *f = 1;
    for (i = 1; i <= n; i++)
    {
        *f = *f * i;
    }
}

int main()
{
    int n = 100;
    int f = 0;
    find_fact(n, &f);
    return 0;
}