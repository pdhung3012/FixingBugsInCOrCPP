#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sum = 0, i, n;
	int arr[1000000000];        //declaring n
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);    //taking input from user
	for (i = 1; i < n; i++)
	{
		if (n%i == 0)     //checking if number divides n
			sum = sum + i;      //adding the number to sum
	}
	if (sum == n)         //condition for perfect number
		printf("YES");
	else
		printf("NO");
	return 0;
}