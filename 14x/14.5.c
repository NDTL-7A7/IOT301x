#include <stdio.h>

#define MAX_NAME 25

int main()
{
	char ren1[MAX_NAME];
	char ren2[MAX_NAME];
	char rem[MAX_NAME];	

	printf("Nhap ten file can doi\n");
	scanf("%s", ren1);
	printf("Nhap ten file moi\n");
	scanf("%s", ren2);
	rename(ren1, ren2);

	printf("Nhap ten file can xoa\n");
	scanf("%s", rem);
	remove(rem);
	return 0;
}
