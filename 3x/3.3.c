#include <stdio.h>

int main()
{
    char ten[32];
    printf("What is the name: ");
    scanf("%s", ten);
    printf("Hello %s. How are you?\n", ten);
    return 0;
}