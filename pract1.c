#include 	<stdio.h>

#define		EXIT		0
#define		SIZE		10

int main(void)
{
	int a = 20;
	int *ptr_a = &a;

	printf("Address: %p | Value by address: %d", ptr_a, *ptr_a);
	
	int arr[SIZE] = {22, 33, 44, 55};
	print("Size in bytes of my array: %d\n", sizeof(arr));
	print("Length of my array: %d", sizeof(arr) / sizeof(*arr));

	return EXIT;
}
