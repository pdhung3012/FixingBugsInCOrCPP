#include <stdio.h>


int arr[100] = { 0 };
int n;

int getMaxLessThan(int upperLimit)
{
	int a[100];
	int max = 0; int i;
	for (i = 0; i < n; i++)
	{
		if (a[i]<upperLimit && a[i]>max)
		{
			max = a[i];
		}
	}
	// this function must return the largest value of arr which is <=upperLimit
}


int main()
{
	int n, k; int i;
	scanf("%d %d\n", &n, &k); int arr[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr[i]);
	}
	int b[k];
	b[0] = getMaxLessThan(10000);
	for (i = 1; i < n; i++)
	{
		b[i] = getMaxLessThan(b[i - 1]);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\n", b[i]);
	}

	return 0;

}