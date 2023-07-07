#include <stdio.h>
int main()
{
	int a, b, c, t;
	t = (a + b + c)/3;
	printf("Enter the Marks\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if ((t<40) || a<3 || b<33 || c<33)
	{	
		printf("STUDENT IS FAIL %d\n", t);
	}
	else
	{
		printf("STUDENT is PASS %d\n", t);
	}
	return 0;
}