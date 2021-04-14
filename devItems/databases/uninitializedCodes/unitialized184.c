#include<stdio.h>
#include<strings.h>

int recur(int a[], int start, int end)
{
	int t;

	if (start > end) return 1;

	t = a[start];
	a[start] = a[end];
	a[end] = t;

	return recur(a, start + 1, end - 1);

}

int main()
{
	//Write your code here.

	int i, n;
	scanf("%d", &n);

	int a[n];

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int x;

	for (i = 0; i < n; i++)
		printf("%d", a[i]);

	return 0;
}