#include <stdio.h>

int main()
{
	int a;
	int *ptr;
	ptr = &a;
	printf("The address of variable a is %u\n", a);
	printf("The value of a is %d\n", ptr);
	printf("The address of variable a is %u\n", *ptr);
	return 0;
}