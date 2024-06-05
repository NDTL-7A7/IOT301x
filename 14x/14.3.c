#include <stdio.h>

#define FILE_NAME "test.txt"

int main()
{
	FILE *fp = fopen(FILE_NAME, "r");
	char c;
	int line_count = 1; // luon luon co 1 dong 
	if (fp == NULL)
	{
		fprintf(stderr, "Could not open file.\n");
		return 1;
	}
	while ((c=fgetc(fp)) != EOF)
	{
		if (c == '\n')
		{
			line_count++;
		}
	}
	printf("The total number of lines is: %d", line_count);
	fclose(fp);
	return 0;
}
