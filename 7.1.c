#include <stdio.h>

int main()
{
	int arr[10];
	int *ptr = &arr[0];
	ptr = ptr+2;
	if (ptr==&arr[2])
	{
		printf("Same Location\n");
	}
	else
	{
		printf("Not Same Location\n");
	}
	return 0;
}