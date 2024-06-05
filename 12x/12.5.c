#include <stdio.h>

void swap_elements(int *arr1, int *arr2)
{
    for (int i = 0; i < 3; i++)
    {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

int main()
{
    int arr1[] = {2, 4, 6};
    int arr2[] = {1, 3, 5, 7, 9, 11};
    swap_elements(arr1, arr2);
    printf("%d %d", arr1[0], arr2[0]);
    return 0;
}