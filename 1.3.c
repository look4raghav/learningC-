#include <stdio.h>

int main()
{
	float c, fl;
	printf("Enter the value of temp\n");
	scanf("%f", c); 

	fl = (c * 9 / 5) + 32;
	printf("The value in fl is %f\n", fl);
	return 0;
}