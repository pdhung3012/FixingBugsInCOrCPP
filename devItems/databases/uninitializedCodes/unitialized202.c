#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, f = 0;
	scanf("&d", &n);
	for (int i; i <= n; i++)
	{
		if (n%i == 0)
			f += i;
	}
	if (n == f)
		printf("YES");
	else
		printf("NO");// Fill this area with your code.
	return 0;
}