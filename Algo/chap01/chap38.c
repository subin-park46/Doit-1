#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#ifdef _LJH
int main()
{
	int a;
	printf("�����̵�ﰢ���� ����մϴ�.\n");
	printf("�Է��� �� : ");
	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		puts("");
	}

}
#endif