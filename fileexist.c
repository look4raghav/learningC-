#include <stdio.h>

int main()
{
	FILE *ptr;
	int num;
	int num2;
	ptr = fopen("Sample.txt", "r");

	if (ptr == NULL)
	{
		printf("File not exist.\n");
	}
	else
	{
		fscanf(ptr, "%d", &num);
		fscanf(ptr, "%d", &num2);
		fclose(ptr);
		printf("The value os num is %d\n", num);
		printf("The value os num2 is %d\n", num2);
	}
	return 0;
}