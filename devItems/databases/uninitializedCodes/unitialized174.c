#include<stdio.h>
#include<strings.h>
int revarr(int arr[], int n)
{
	int i;
	if (i < 0) return 0;
	printf("%d ", arr[i]);
	return revarr(arr, n - 1);
}
int main()
{
	int n, ar[10000];
	for (int i = 0; i < n; i++)
		scanf("%d", &ar[i]);
	revarr(ar, n);
	return 0;
}