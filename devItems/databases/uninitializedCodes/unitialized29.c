#include <stdio.h>
int main()
{
	//Fill this area with your code.
	int n, m, i, j, l;
	int g, k;

	scanf("%d%d\n", &n, &m);
	for (i = 1; i <= n; i++)
	{
		g = 0;
		for (j = 1; j <= m; j++)
		{
			scanf("%d", &k);
			g = g + k;
		}
		printf("%d\n", l);

	}



	return 0;
}