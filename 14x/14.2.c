#include <stdio.h>

#define MAX_STR 1000
#define FILE_NAME "test.txt"

int main()
{
	FILE *fp = fopen(FILE_NAME, "r");
	char fb[MAX_STR];
	if (fp == NULL)
	{
		fprintf(stderr, "Could not open file.\n");
		return 1;
	}
	while (fgets(fb, MAX_STR, fp) != NULL)
	{
		printf("%s", fb);
	}
	fclose(fp);
	return 0;
}
