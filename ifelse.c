#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter a number\n");
	scanf("%d", &a);

	if(a%2 == 0)
	{
		printf("The value is even %d\n", a);
	}
	else
	{
		printf("The value is odd %d\n", a);
	}

	return 0;
}