#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, count;
	int a[100];
	int s[100];
	scanf("%d", &n);
	for (int i; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		s[i] = 0;
		for (int j = i; j < n; j++)
		{
			if (a[i] > a[j])
				count = count + 1;
			s[i] = s[i] + 1;
		}
	}
	for (int k = 0; k < n; k++)
		printf("%d", s[k]);
	return 0;
}