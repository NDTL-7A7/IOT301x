#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "test.txt"
#define FILE_NAME2 "test2.txt"
#define FILE_NEW "test_new.txt"

static int get_file_size(FILE *fp)
{
	size_t size;
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	return size;
}

int main()
{
	FILE *fp1, *fp2, *fp_new;
	fp1 = fopen(FILE_NAME, "r");
	fp2 = fopen(FILE_NAME2, "r");
	fp_new = fopen(FILE_NEW, "w");

	if (fp1 == NULL || fp2 == NULL || fp_new == NULL)
	{
		fprintf(stderr, "Could not open file.\n");
		return 1;
	}

	char *f1_str = (char *)calloc(sizeof(char), get_file_size(fp1));
	char *f2_str = (char *)calloc(sizeof(char), get_file_size(fp2));

	fread(f1_str, sizeof(char), get_file_size(fp1), fp1);
	fread(f2_str, sizeof(char), get_file_size(fp2), fp2);
	fprintf(fp_new, "%s%s", f1_str, f2_str); 

	free(f1_str);
	free(f2_str);
	fclose(fp1);
	fclose(fp2);
	fclose(fp_new);
	return 0;
}
