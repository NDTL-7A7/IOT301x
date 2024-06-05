#include <stdio.h>

void search(int *x, int y)
{
    int i = 0;
    int found = 0;

    for (i = 0; i < 5; i++)
    {
        if (*(x + i) == y)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("Da tim thay.\n");
    else
        printf("Khong tim thay.\n");
}

int main()
{
    int arr[] = {1, 2, 3};
    search(arr, 2);
    return 0;
}