#include 	<stdio.h>

#define		EXIT		0
#define		SIZE		10

int main(void)
{
	int a = 20;
	int *ptr_a = &a;

	printf("Address: %p | Value by address: %d", ptr_a, *ptr_a);
	
	int arr[SIZE] = {22, 33, 44, 55};
	
	printf("Size in bytes of my array: %lu\n", sizeof(arr));
	printf("Length of my array: %lu\n", sizeof(arr) / sizeof(*arr));

	// this comment shows add line for fix_errors branch

	printf("\n");

	// let's see the elements of the array...
	for(int i = 0; i < SIZE - 1; i++)
	{
		printf("Elem: [%d]: [%d]\n", i, arr[i]);
	}

	return EXIT;
}
