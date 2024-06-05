#include <stdio.h>
#include <string.h>

#define MAX_HOC_SINH 3 

struct hocsinh
{
	char hoten[25];
	int tuoi;
	char diachi[128];
	float gpa;
};

struct hocsinh hocsinh_arr[MAX_HOC_SINH];
int hocsinh_count = 0;

static void nhap()
{
	if (hocsinh_count > MAX_HOC_SINH - 1) 
	{
		printf("So hoc sinh da dat gioi han.\n");
		return;
	}
	struct hocsinh *hocsinh_ptr = &hocsinh_arr[hocsinh_count++];
	printf("Nhap ho ten: ");
	scanf("%25s", hocsinh_ptr->hoten);
	printf("Nhap tuoi: ");
	scanf("%d", &hocsinh_ptr->tuoi);
	printf("Nhap dia chi: ");
	scanf("%128s", hocsinh_ptr->diachi);
	printf("Nhap gpa: ");
	scanf("%f", &hocsinh_ptr->gpa);
}

static void info()
{
	int found = 0;
	char ten_hs[25];
	printf("Nhap ten hoc sinh: ");
	scanf("%25s", ten_hs);
	
	for (int i = 0; i < hocsinh_count; i++)
	{
		struct hocsinh *hs_ptr = &hocsinh_arr[i];
		if (strcmp(ten_hs, hs_ptr->hoten) == 0)
		{
			found = 1;
			printf("\nTen: %s\n"
			       "Tuoi: %d\n"
			       "Dia chi: %s\n"
			       "GPA: %.2f\n",
			       hs_ptr->hoten, hs_ptr->tuoi,
			       hs_ptr->diachi, hs_ptr->gpa);
		}
	}	

	if (found == 0)
		printf("Khong tim thay hoc sinh %s\n", ten_hs);
}

int main()
{
	int num = 0;
	while (1)
	{
		printf("\n---------------------------\n");
		printf("[1] Nhap thong tin hoc sinh\n");
		printf("[2] Tim kiem hoc sinh\n");
		printf("[3] Thoat\n");
		printf("\n---------------------------\n");
		scanf("%d", &num);

		switch (num)
		{
			case 1: nhap(); break;
			case 2: info(); break;
			case 3: return 0;
			default:
				printf("Lua chon khong hop le!\n");
				break;
		}
	}
	return 0;
}
