#include <stdio.h>
#include <stdlib.h>
int main() {
	int j[20], i;
	printf("enter the value of n");
	int n;
	for (i = 0; i <= 19; i++)
		scanf("%d", &j[i]);
	if ((j[i] > j[i - 1]) && (j[i] > j[i + 1]))
		printf("yes");
	else
		printf("no");
	return 0;
}