#include <stdio.h>

int main()
{
	int i = 34;
	int *ptr = &i;
	printf("ptr value is %u\n", ptr);
	ptr++;
	printf("ptr value is %u\n", ptr);
	


	char c = 33;
	char *ptr = &c;
	printf("ptr value is %u\n", ptr);
	ptr = ptr + 1;
	printf("ptr value is %u\n", ptr);
	return 0;
}
