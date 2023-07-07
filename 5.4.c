#include <stdio.h>
#include <math.h>
int fibo(int a);

int main()
{
	int a;
	printf("Enter the nth number\n");
	scanf("%d", &a);
	printf("The number in series is %d\n", fibo(a));
	return 0;
}

int fibo(int a)
{
	if (a==0)
	{
		return 0;
	}
	else if (a==1)
	{
		return 1;
	}
	else
	{
		return(fibo(a - 1) + fibo(a - 2));
	}
}