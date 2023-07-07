#include <stdio.h>

int main()
{
	int i = 345;
	int *ptr;
	int **ptr_ptr;

	ptr = &i;
	ptr_ptr = &ptr;
	printf("The value of i is %d\n", **ptr_ptr);
	return 0;
}