#include <stdio.h>

int main()
{
	FILE *ptr;
	ptr = fopen("sample.txt", "r");
	fclose(ptr);
	return 0;
}