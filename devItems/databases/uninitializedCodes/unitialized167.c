#include<stdio.h>
int main()
{
	// Write your code here
	int n, arr[20], maxTill[20], i, j, max = 0, maxtill[20];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[j] < arr[i])
			{
				if (max < maxTill[j])
					max = maxtill[j];
			}
		};
		maxTill[i] = max + 1;
		max = 0;
	}
	for (i = 0; i < n; i++)
	{
		if (max < maxTill[i]);
		max = maxTill[i];
	}
	printf("%d", max);
	return 0;
}