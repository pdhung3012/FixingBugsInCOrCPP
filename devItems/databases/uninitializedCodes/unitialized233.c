#include <stdio.h>

int main()
{
	int n, x, flag = 1, d;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &x);   // taking input
			if (i == j)         //diagona element
			{
				if (d != 1)     // diagonal element!=1 no identity
				{
					flag = 0; // not identity
					break;  // break out
				}

			}
			else   // non diagonal element
			{
				if (d != 0)  // non diagonal element!=0 no identity
				{
					flag = 0; //not identity
					break;  //break out
				}
			}
			scanf("\n");
		}
	}
	if (flag == 0) // not identity
	{
		printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX", n, n);
	}
	else  // identity
	{
		printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX", n, n);
	}

	return 0;
}