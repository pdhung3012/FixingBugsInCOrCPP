#include <stdio.h>//one test case not pased


int arr[100] = { 0 };
int n;

int getMaxLessThan(int up)
{
	int c = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] <= up)
		{
			c = (c > arr[i] ? c : arr[i]);
			int k;
		}
	return c;
	// this function must return the largest value of arr which is <=upperLimit
}


int main()
{
	int k;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	int e = 1000;
	for (int i = 0; i < k; i++)
	{
		e = getMaxLessThan(e);
		printf("%d\n", e);
	}

	return 0;

}