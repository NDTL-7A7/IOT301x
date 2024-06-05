#include <stdio.h>
#include <string.h>

void json_extract(char json[], char hoten[], char gioitinh[],
                               char sdt[], char email[])
{
    char info[4][100];
    int i;

    char *token = strtok(json, ",");
    i = 0;
    while (token != NULL)
    {
        strcpy(info[i], token);
        i++;
        token = strtok(NULL, ",");
    }

    // ho ten
    char *hoten_token = strtok(info[0], ":");
    strcpy(hoten, strtok(NULL, ":"));
    // gioi tinh
    token = strtok(NULL, ",");
    char *gioitinh_token = strtok(info[1], ":");
    strcpy(gioitinh, strtok(NULL, ":"));
    // sdt
    token = strtok(NULL, ",");
    char *sdt_token = strtok(info[2], ":");
    strcpy(sdt, strtok(NULL, ":"));
    // email
    token = strtok(NULL, ",");
    char *email_token = strtok(info[3], ":");
    strcpy(email, strtok(NULL, ":"));

    if (email[strlen(email) - 1] == '}')
        email[strlen(email) - 1] = '\0';
}

int main()
{
    char json[] = "{\"hoten\":\"Le Thi My Duyen\",\"gioitinh\":\"nu\",\"sodienthoai\":\"0935777888\",\"email\":\"duyen86@gmail.com\"}";
    char hoten[100], gioitinh[100], sdt[100], email[100];
    json_extract(json, hoten, gioitinh, sdt, email);
    printf("Ho ten: %s\n", hoten);
    printf("Gioi tinh: %s\n", gioitinh);
    printf("Sdt: %s\n", sdt);
    printf("Email: %s\n", email);
    return 0;
}