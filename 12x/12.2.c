#include <stdio.h>

int compare(char *s1, char *s2)
{
    char *ptr1 = s1;
    char *ptr2 = s2;
    int i = 0;

    while (*(ptr1 + i) == *(ptr2 + i) &&
           *(ptr1 + i) != '\0' &&
           *(ptr2 + i) != '\0')
           i++;

    return (*(ptr1 + i) == '\0' && *(ptr2 + i) == '\0');
}

int main()
{
    printf("\n%d\n", compare("hoang", "hoang"));
    return 0;
}