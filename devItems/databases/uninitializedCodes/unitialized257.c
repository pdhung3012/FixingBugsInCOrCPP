#include <stdio.h>

int main() {
	int i, j = 0, n;
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)
	{
		while (j < n)
		{
			int t;
			if ((i == j && t == 1) || (i != j && t == 0))
			{
				j++;
			}
			else
			{
				printf("not");
			}
		}
		scanf("\n");
	}
	return 0;
}