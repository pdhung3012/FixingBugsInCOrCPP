#include<stdio.h>
#include<strings.h>

void print(long int arr[], long int n) {
	/*static long int i = 0;
	if(i < n){
		printf("%ld ", &arr[n-1-i]);
	}
	else{
		return;
	}
	i++;
	print(arr, n);*/

	for (int i; i < n; i++) {
		printf("%ld ", arr[n - 1 - i]);
	}

	return;
}

int main()
{
	//Write your code here.
	long int n, i;
	scanf("%ld\n", &n);
	long int arr[n];

	for (i = 0; i < n; i++) {
		scanf("%ld ", &arr[i]);
	}

	/*for(i = 0; i < n; i++){
		printf("%ld ", arr[n-1-i]);
	}*/

	print(arr, n);

	return 0;
}