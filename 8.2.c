#include <stdio.h>
#include <string.h>

int main()
{
	char st1[34];
	char st2[34];
	char c;
	int i = 0;

	printf("Value of 1st :");
	scanf("%s\n", st1);
	printf("Value of 2nd :");
	
	while(c != '\n')
	{
		fflush(stdin);
		scanf("%c", &c);
		st2[i] = c;
		i++;
	}
	st2[i] = '\0';

	printf("Value of st1 is : %s\n", st1);
	printf("Value of st2 is : %s\n", st2);
	printf("strcmp for these strings returns %d\n", strcmp(st1, st2));
	return 0;
}