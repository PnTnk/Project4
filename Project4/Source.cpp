#include<stdio.h>
int main()
{
	int n;
	printf("Enter number :");
	scanf_s("%d", &n);
	int x = 1;
	while (x <= n) {
		int y = 1;
		while (y <= x) {
			printf("*");
			y += 1;
		}
		x += 1;
		printf("\n");
	}
	return 0;
}