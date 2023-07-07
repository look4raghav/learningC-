#include <stdio.h>
int main()
{
	int a;
	int sum=0;
	int n=10;

	for(a=1; a<=n; a++)
	{
		sum +=a;
	}
	printf("The value of sum of 1 to 10 is %d\n", sum);
	return 0;
}