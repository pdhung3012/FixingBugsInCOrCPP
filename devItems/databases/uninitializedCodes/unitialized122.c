#include <stdio.h>
int main() {
	int n, i, book[99], order[99], book2[99], num;
	scanf("%d", &n);//initialising arrays
	for (i = 0; i < n; i++)
		scanf("%d", &book[i]);
	for (i = 0; i < n; i++)
		scanf("%d", &order[i]);

	for (i = 0; i < n; i++)//loop for rearranging
	{
		order[i] = num;
		book2[num] = book[i];
	}


	for (i = 0; i < n; i++)
		printf("%d ", book2[i]);


	printf("end"); //do not modify this
	return 0;
}