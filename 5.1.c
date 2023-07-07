#include <stdio.h>
float average(int a, int b, int c);

int main()
{
	int a, b, c;
	printf("Enter the values of a\n");
	scanf("%d", &a);
	printf("Enter the values of b\n");
	scanf("%d", &b);
	printf("Enter the values of c\n");
	scanf("%d", &c);
	printf("The value of average is %f\n", average(a,b,c));
	return 0;
}

float average(int a, int b, int c)
{
	float result;
	result = (float)(a+b+c)/3;
	return result;
}