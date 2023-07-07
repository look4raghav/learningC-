#include <stdio.h>

int main()
{
	// char str[] = {'R', 'a', 'g', 'h', 'a', 'v', '\0'};
	char str[] = "Raghav";
	char *ptr = str;
	while(*ptr != '\0')
	{
		printf("%c\n", *ptr);
		ptr++;
	}
	return 0;
}