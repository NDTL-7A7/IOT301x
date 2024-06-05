#include <stdio.h>

struct ngaysinh
{
	unsigned char ngay;
	unsigned char thang;
	unsigned short nam;
};

struct nhanvien
{
	char ten[20];
	struct ngaysinh ns;
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
	printf("Nhap ngay - thang - nam sinh:\n");
	scanf("%d", &nv.ns.ngay);
	scanf("%d", &nv.ns.thang);
	scanf("%d", &nv.ns.nam);

	printf("\nTen: %s\n"
	       "Id: %d\n"
	       "Luong: %.2f\n"
	       "Ngay thang nam sinh: %u/%u/%hu",
	       nv.ten, nv.id, nv.luong,
	       nv.ns.ngay, nv.ns.thang, nv.ns.nam);
	return 0;
}
