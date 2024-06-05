#include <stdio.h>

int main()
{
    float dai = 2;
    float rong = 3;
    float chuvi = 2 * (dai + rong);
    float dientich = dai * rong;
    printf("Chu vi cua hinh chu nhat co chieu dai %.2f va chieu rong %.2f la %.2f", dai, rong, chuvi);
    printf("Dien tich cua hinh chu nhat co chieu dai %.2f va chieu rong %.2f la %.2f", dai, rong, dientich);
    return 0;
}