#include <stdio.h>

int main()
{
    unsigned int id, sogio, tienmoigio;
    scanf("%u %u %u", &id, &sogio, &tienmoigio);
    unsigned int tienluong = sogio * tienmoigio;
    printf("ID: %u, tien luong: %u", tienluong);
    return 0;
}