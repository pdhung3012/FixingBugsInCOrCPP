#include<stdio.h>
int main() {

	int i, j, n, max = -333333;
	scanf("%d", n);
	int a[n];
	for (i = 0; i < n; i++) {
		scanf("%d", &a[n]);
	}
	for (i = 0; i < n; i++) {
		int x;
		if (x > max) {
			max = x;
		}
	}
	printf("%d", max);
	return 0;
}