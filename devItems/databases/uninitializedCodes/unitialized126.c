#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int k, i, j;
	scanf("%d", &n);
	for (k = 1; k <= 2 * n + 1; k++)
	{
		j = 1;
		for (i = 1; i <= n - j; i++)
		{
			printf(" ");
		}
		for (int m; m <= j; m++)
		{
			if (m % 2 == 0)
				printf("x");
			else
				printf("*");
		}
	}
	return 0;
}