#include <stdio.h>
int main()
{
	int num[100], pos[100], mum[100];
	int n, i;
	scanf("%d", n);
	for (i = 0; i < n; i++)
		scanf("%d", num[i]);
	for (i = 0; i < n; i++)
		scanf("%d", pos[i]);
	for (i = 0; i < n; i++)
		pos[i] = mum[i];
	for (i = 0; i < n; i++)
		printf("%d", pos[i]);
	printf("end"); //do not modify this 
	return 0;
}