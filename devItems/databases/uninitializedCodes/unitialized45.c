#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int t, i, j, x;
	scanf("%d\n", &t);
	int a[t];
	for (i = 0; i < t; i++)
	{
		scanf("%d\n", &a[t]);
	}
	for (i = 0; i < t; i++)
	{
		j = 0;
		while (pow(2, j) < a[i])
			j++;
		if (x == (pow(2, j) - 1))
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
/*void han(int x,int y)
{
	if(y<0)
	printf("no\n");
	if(y>=0)
	{
		if(x==(pow(2,y)-1))
		printf("yes\n");
		else
		han(x,y-1);
	}
}*/