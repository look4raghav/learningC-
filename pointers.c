#include <stdio.h>
int sum (int a, int b);

int main()
{
	int i = 11;
	int *j = &i;
	printf("The value of i is %d\n", i);
	printf("The value of i is %d\n", *j);
	printf("The address of i is %u\n", &i);
	printf("The address of i is %u\n", j);
	printf("The address of j is %u\n", &j);
	printf("The value of j is %d\n", *(&j));

	int a=4, b=7;
	printf("The value of sum is %d\n", sum(a, b));
	return 0;
}

int sum (int a, int b)
{
	return a+b;
}