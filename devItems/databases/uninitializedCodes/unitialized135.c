#include <stdio.h>
#include <stdlib.h>
int main() {
	double a, b, area = 0.0, d, l;
	int n;
	scanf("%d", &n);
	const int k = n;
	double c[k];
	d = (b - a) / n;
	c[0] = a;
	c[n - 1] = b;
	for (int i; i < n - 1; i++)
	{
		a[i] = a[i - 1] + d;
	}
	for (int i; i < n; i++)
	{
		l = 2.0*a[i] * (a[i] * a[i] - 4.0);
		if (l < 0)
			l = (-l);
		area = area + l;
	}
	printf("%lf", area);
	return 0;
}