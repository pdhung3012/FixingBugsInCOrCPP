#include <stdio.h>
#include <stdlib.h>
int divsr(int, int);
int main()
{
	int x, i, sum = 0;
	printf(INT_MAX);
	for (i = 1; i < x; i++)
	{
		if (divsr(x, i))
			sum = sum + i;
	}
	if (sum == x)
		printf("YES");
	else
		printf("NO");
	return 0;
}
int divsr(int a, int b)
{
	if (a == b || a % b != 0)
		return 0;
	else
		return 1;
}