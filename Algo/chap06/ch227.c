#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define swap(type,x,y) do { type t = x; x = y; y = t; }while(0)


#ifdef _PJS
void partition(int a[], int n)
{
	int i;
	int pl = 0;
	int pr = n - 1;
	int x = a[n / 2];

	do {
		while (a[pl] < x)pl++;
		while (a[pr] > x)pr--;
		if (pl <= pr) {
			swap(int, a[pl], a[pr]);
			pl++;
			pr--;
		}
	} while (pl <= pr);
	printf("�ǹ��� ���� %d�Դϴ�.\n", x);
	printf("�ǹ� ������ �׷�\n");
	for (i = 0; i <= pl - 1; i++)
		printf("%d ", a[i]);
	putchar('\n');
	if (pl > pr + 1) {
		printf("�ǹ��� ��ġ�ϴ� �׷�\n");
		for (i = pr + 1; i <= pl - 1; i++)
			printf("%d ", a[i]);
		putchar('\n');
	}
	printf("�ǹ� �̻��� �׷�\n");
	for (i = pr + 1; i < n; i++)
		printf("%d ", a[i]);
	putchar('\n');

}

int main()
{
	int i, nx;
	int *x;
	puts("�迭�� �����ϴ�.");
	printf("��� ���� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	partition(x, nx);
	free(x);

}

#endif