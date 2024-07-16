#include 	<stdio.h>

#define		EXIT		0

int main(void)
{
	int a = 20;
	int *ptr_a = &a;

	printf("Address: %p | Value by address: %d", ptr_a, *ptr_a);
	
	return EXIT;
}
