#include <stdio.h>

int main(){
	int arr[] = {15202512, 20, 30, 40, 5566, 896};
	long long int i = (long long int )arr[1];
	arr[1] = (long long int )arr[1];
	printf("Long long int is: %d\n", i);
	printf("int is: %d", arr[0]);
	return 0;
}