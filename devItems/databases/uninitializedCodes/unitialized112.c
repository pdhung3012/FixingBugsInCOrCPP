#include <stdio.h>

int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	while (n > 0)
	{
		sum = sum + n % 10;
		n /= 10;
	}
	int y;
	while (1)
	{
		if (y%sum == 0)
			break;
		y++;
	}
	printf("%d", y);
	return 0;
}