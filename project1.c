#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int nguesses=1;
	int number; 
	int guess;

	srand(time(0));
    number = rand()%100 + 1;

	do
	{
	printf("Guess any Number between 1 too 100\n");
	scanf("%d", &guess);

	if(guess>number)
	{
		printf("Lower number please.");
	}
	else if (guess<number)
	{
		printf("Higher number please.");

	}
	else
	{
		printf("You guessed correct number in %d\n times.", nguesses);

	}
	nguesses++;
	}
	while(guess!=number);
	return 0;
}