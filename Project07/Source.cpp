#include<stdio.h>
int main()
{
	int n, sum = 0;
	do {
		printf("intput number (until sum =100): ");
		scanf_s("%d", &n);
		sum = sum + n;
		printf("sum =%d\n", sum);
	} while (sum != 100);
	return 0;
}