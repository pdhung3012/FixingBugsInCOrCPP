#include <stdio.h>
#include<stdlib.h>

int arr[100] = { 0 };
int n;

int getMaxLessThan(int upperLimit)
{

	// this function must return the largest value of arr which is <=upperLimit
	int max = 0, i;
	for (i = 0; i < n; i++)
	{
		if (arr[i] >= upperLimit)
		{
			continue;       //skip entries which are >= upper limit
		}
		if (arr[i] > max)
		{
			max = arr[i];     //assign the max value to variable max
		}

	}
	return max;         //return the maximum value
}


int main()
{
	int MAXINT;
	int k, upperLimit = MAXINT, i, m;

	scanf("%d %d", &n, &k);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);    //input the sizes of the chocolates
	}

	m = getMaxLessThan(upperLimit);   //call the func. to find the max size

	for (i = 1; i <= k; i++)           //call the function k times
	{
		printf("%d\n", m);
		m = getMaxLessThan(m);
	}

	return 0;

}