#include <stdio.h>

typedef struct
{
	int feet;
	int inch;
} distance_t;

void add_distance(distance_t dst1, distance_t dst2)
{
	distance_t sum = {dst1.feet + dst2.feet,
			  dst1.inch + dst2.inch};
	printf("Tong cua hai khoang cach lan luon la: %d, %d\n",
			sum.feet, sum.inch);
}

int main()
{
	distance_t distance_1 = {12, 13};
	distance_t distance_2 = {16, 27};
	add_distance(distance_1, distance_2);
	return 0;
}
