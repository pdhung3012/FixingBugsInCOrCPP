#include "pch.h"

#include <stdio.h>
int main()
{
	int k, n, x, a[100];
	scanf("%d", &k);
	scanf("%d", &n);

	for (int i; i < n; i++)
		scanf("%d", &a[i]);

	for (int i; i < n; i++)
	{
		x = k - a[i];
		for (int i; i < n; i++)
		{
			if (a[i] == x)
			{
				printf("lucky");
				break;
			}
			else
				continue;
		}
		printf("unlucky");
	}

	return 0;
}