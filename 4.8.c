#include <stdio.h>
int main()
{
	int i=0, n=7, factorial=1;
	for(i=1; i<=n; i++)
	{
	    factorial *=i;
	}
	printf("The value of factorial %d is %d\n", n, factorial);
	return 0;
}