#include <stdio.h>
#include <stdlib.h>
int check(long a);  //forward declaration
int main()
{
	long x;
	scanf("%ld", &x);
	if (check(x))    //will return 1 corresponding to perfect number
		printf("YES");
	else
		printf("NO");
	return 0;
}
int check(long a)
{
	long i, s = 1, n;
	for (i = 2; i <= n / 2; i++)
		if (a%i == 0)
			s = s + i;
	if (s == a)
		return 1;
	else
		return 0;
}