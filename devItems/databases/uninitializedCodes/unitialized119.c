#include <stdio.h>
int main() {
	int n, i, j, k, l;
	int book[100];
	int p[100];
	int a[100], b[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &book[i]);
	}
	for (j = 0; j < n; j++)
	{
		scanf("%d", &a[j]);
	}
	for (k = 0; k < n; k++)
	{
		p[k] = book[k];

	}
	for (l = 0; l < n; l++)
	{
		printf("%d ", b[l]);
	}
	// Insert your code here
	printf("end"); //do not modify this 
	return 0;
}