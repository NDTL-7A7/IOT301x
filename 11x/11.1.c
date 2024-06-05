#include <stdio.h>

int main()
{
    char x = 0;
    int y = 1;
    float z = 3.0;

    char *px = &x;
    char *py = &y;
    char *pz = &z;

    *px = 12;
    *py = 23;
    *pz = 2323.42;

    printf("Dia chi cua px: %p, dia chi va gia tri cua bien x: %p, %d\n", &px, px, *px);
    printf("Dia chi cua py: %p, dia chi va gia tri cua bien y: %p, %d\n", &py, py, *py);
    printf("Dia chi cua pz: %p, dia chi va gia tri cua bien z: %p, %d\n", &pz, pz, *pz);
    
    return 0;
}