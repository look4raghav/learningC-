#include <stdio.h>

int main()
{
	int a;
	printf("Enter the marks\n");
	scanf("%d", &a);
	if (a>=90 && a<=100)
	{
		printf("Grade is A\n", a);
	}
	else if (a>=80)
	{
		printf("Grade is B\n", a);
	}
	else if (a>=70)
	{
		printf("Grade is C\n", a);
	}
	else if (a>=60)
	{
		printf("Grade is D\n", a);
	}
	else
	{
		printf("Grade is F\n");
	}
	
	return 0;
}