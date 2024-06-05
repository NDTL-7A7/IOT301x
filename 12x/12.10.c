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

char *multi_tok(char *input, char *delimiter)
{
	static char *string;
	if (input != NULL)
		string = input;

	if (string == NULL)
		return string;

	char *end = strstr(string, delimiter);
	if (end == NULL)
	{
		char *temp = string;
		string = NULL;
		return temp;
	}

	char *temp = string;

	*end = '\0';
	string = end + strlen(delimiter);
	return temp;
}

int main()
{
    char json[] = "[{\"hoten\":\"Le Thi My Duyen\",\"gioitinh\":\"nu\",\"sodienthoai\":\"0935777888\",\"email\":\"duyen86@gmail.com\"},"
                  "{\"hoten\":\"Tran Trung Thanh\",\"gioitinh\":\"nam\",\"sodienthoai\":\"0976333444\",\"email\":\"thanhtt98.com\"},"
                  "{\"hoten\":\"Huynh Anh Hoang\",\"gioitinh\":\"nu\",\"sodienthoai\":\"0939745220\",\"email\":\"hahoang88@gmail.com\"},"
                  "{\"hoten\":\"Nguyen Minh Khoi\",\"gioitinh\":\"nam\",\"sodienthoai\":\"0703666777\",\"email\":\"khoimaster@gmail.com\"}]";

    char hoten[100], gioitinh[100], sdt[100], email[100];
    char khachhang[500];
    char hoten_nam[10][100];
    int sl_nam = 0;
    int sl_khachhang = 0;
    int i = 0;

    char *token = multi_tok(json, "},{");
    while(token != NULL)
    {
        strcpy(khachhang, token);
        json_extract(khachhang, hoten, gioitinh, sdt, email);
        if (strcmp(gioitinh, "\"nam\"") == 0)
        {
            strcpy(hoten_nam[i], hoten);
            sl_nam++;
            i++;
        }
        sl_khachhang++;
        token = multi_tok(NULL, "},{");
    }

    printf("Co tong so %d khach hang nam / tong so %d khach hang\n", sl_nam, sl_khachhang);
    if (sl_nam > 0)
    {
        printf("Ho ten cac khach hang nam:\n");
        for (i = 0; i < sl_nam; i++)
        {
            printf("%d. %s\n", i + 1, hoten_nam[i]);
        }
    }
    return 0;
}