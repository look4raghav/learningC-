#include <stdio.h>

int main()
{
	int marks[5];
	printf("Enter the value of marks for 1\n");
	scanf("%d", &marks[0]);
	printf("Enter the value of marks for 2\n");
	scanf("%d", &marks[1]);
	printf("Enter the value of marks for 3\n");
	scanf("%d", &marks[2]);
	printf("Enter the value of marks for 4\n");
	scanf("%d", &marks[3]);
	printf("Enter the value of marks for 5\n");
	scanf("%d", &marks[4]);

	printf("U have entered\n %d\n %d\n %d\n %d\n %d\n", marks[0], marks[1], marks[2], marks[3], marks[4]);
	return 0;
}
