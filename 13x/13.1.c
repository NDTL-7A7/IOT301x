#include <stdio.h>

struct nhanvien
{
	char ten[20];
	int id;
	float luong;
};

int main(int argc, char **argv)
{
	struct nhanvien nv;
	printf("Nhap ten:\n");
	scanf("%s", nv.ten);
	printf("Nhap id:\n");
	scanf("%d", &nv.id);
	printf("Nhap luong:\n");
	scanf("%f", &nv.luong);

	printf("\nTen: %s\n"
	       "Id: %d\n"
	       "Luong: %.2f\n", nv.ten, nv.id, nv.luong);
	return 0;
}
