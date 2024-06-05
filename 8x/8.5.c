#include <stdio.h>

int main()
{
    int arr[100];
    int n = 0;
    printf("Nhap so luong phan tu cua mang: ");
    do
    {
        scanf("%d", &n);
    } while (n <= 0);  

    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu: ");
        scanf("%d", &arr[i]);
    }

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = a[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}