#include<stdio.h>
int main()
{
	int a[100], n, count = 0, j, c[100];
	scanf("%d", &n);
	for (int i; i < n; i++)
		scanf("%d", &a[i]);
	for (int i; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (a[j + 1] > a[j])
				count = count + 1;
			else
				break;
		}
		c[i] = count;
		count = 0;
	}
	int m = 0;
	for (int i; i < n; i++)
	{
		if (c[i] >= c[m])
			m = i;
	}
	printf("%d", c[m]);
	return 0;
}