#include <stdio.h>

int main()
{
    char *str = "hello";
    int i = 0;
    int j = 0;
    while (*(str + i) != '\0')
    {
        i++;
    }
    i++;
    for (j = i; j >= 0; j--)
    {
        printf("%c", *(str + j));
    }
    return 0;
}