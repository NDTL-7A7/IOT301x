#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

int str_len(char *str)
{
    int count = 0;
    while (*str != '\0') 
    {
        count++;
        str++;
    }
    return count;
}

char *str_cat(char *str1, char *str2)
{
    int str1_size = str_len(str1);
    int str2_size = str_len(str2);
    int str_size = (str1_size + str2_size) + 1;
    char *str = malloc(str_size);
    for (int i = 0; i < str1_size; i++)
        *(str + i) = *(str1 + i);
    int j = 0;
    for (int i = str1_size; i < str_size; i++)
    {
        *(str + i) = *(str2 + j);
        j++;
    }
    *(str + str_size) = '\0';
    return str;
}

bool str_cmp(char *str1, char *str2)
{
    while (*str1 == *str2 && *str1 != '\0' && *str2 != '\0')
    {
        str1++;
        str2++; 
    }
    return (*str1 == '\0' && *str2 == '\0');
}

int main()
{
    char *str1 = "hello";
    char *str2 = " world!";
    char *str = str_cat(str1, str2);
    printf("%s\n", str);
    printf("%s\n", (str_cmp("hi", "hi")) ? "true" : "false");
    free(str);
    return 0;
}