#include<stdio.h>
int main()
{
	int n, j, max, count;
	int a[20];
	for (int i; i < n; i++)
	{
		scanf("%d ", &a[i]);
	}
	for (int i; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (a[i] < a[j])
			{
				count = count + 1;
			}
		}
		if (count > max) { max = count; }

	}
	printf("%d", max);
	return 0;
}