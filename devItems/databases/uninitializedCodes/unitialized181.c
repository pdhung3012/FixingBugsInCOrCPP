#include<stdio.h>
#include<strings.h>
int rev(int[], int);
int main()
{
	//Write your code here.
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	rev(arr, n);
	return 0;
}
int rev(int c[], int k)
{
	if (k == 0)
	{
		print("%d ", c[0]);
		return 0;
	}
	printf("%d ", c[k]);
	rev(c, k);
	return 0;

}