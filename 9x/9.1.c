#include <stdio.h>
#include <math.h>


int UCLN(int a, int b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
}

int gia_tri_tuyet_doi(float x)
{
    if (x < 0)
        return -x;
    return x;
}

long giai_thua(int n)
{
    if (n == 0)
        return 1;
    else
        return n * giai_thua(n - 1);
}

float khoang_cach(float Ax, float Ay, float Bx, float By)
{
    return sqrt((Ax - Bx) * (Ax - Bx) + (Ay - By) * (Ay - By));
}


int main()
{
    return 0;
}