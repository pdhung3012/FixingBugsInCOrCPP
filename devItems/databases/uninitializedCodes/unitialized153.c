#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int ar[20];
	scanf("%d", &n);
	for (int i; i < n; i++)
	{
		scanf("\n%d", &ar[i]);
	}
	for (int i; i < n - 1; i++)
	{
		if (ar[i] < ar[i - 1] && ar[i] < ar[i + 1])
		{
			printf("Yes");
			break;
		}
	}
	return 0;
}