#include <stdio.h>

#define FILE_NAME "test.txt"

int main()
{
	FILE *fp = fopen(FILE_NAME, "w");
	char fb[255];
	if (fp == NULL)
	{
		fprintf(stderr, "Could not open file.\n");
		return 1;
	}
	printf("Enter string: ");
	scanf("%s", fb);	
	fprintf(fp, fb);
	fclose(fp);
	return 0;
}
