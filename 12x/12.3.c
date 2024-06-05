#include <stdio.h>

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int max = *arr;
    int i;
    for (i = 0; i < 10; i++)
    {
        if (max < *(arr + i))
        {
            max = *(arr + i);
        }
    }
    printf("%d\n", max);
    return 0;
}