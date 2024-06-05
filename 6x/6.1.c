#include <stdio.h>

int main()
{
    int sothunhat, sothuhai;
    printf("Nhap so thu nhat va so thu hai\n");
    scanf("%f %f", &sothunhat, &sothuhai);

    if ((sothunhat != (int)sothunhat) || (sothuhai != (int)sothuhai))
    {
        printf("so nhap vao khong phai so nguyen\n");
    }

    if (sothunhat == sothuhai)
    {
        printf("so thu nhat bang so thu hai\n");
    }
    else if (sothunhat > sothuhai)
    {
        printf("so thu nhat lon hon so thu hai\n");
    }
    else if (sothunhat < sothuhai)
    {
        printf("so thu nhat nho hon so thu hai\n");
    }
    return 0;
}