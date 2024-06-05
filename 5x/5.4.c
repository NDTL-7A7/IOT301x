#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    
    int ngay = n/60/24;
    int nam = ngay/365;
    printf("ngay: %d\n"
           "nam: %d\n", ngay, nam);
    return 0;
}