#include <stdio.h>
float temp(int a);

int main()
{
	int a;
	printf("Enter the value of temp in Celcius\n");
	scanf("%d", &a);
	printf("The value in F is %f\n", temp(a));

	return 0;
}

float temp(int a)
{
	float result;
	result = (float)(9*	a/5)+32;
	return result;
}
