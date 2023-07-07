#include <stdio.h>
void display();
void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
	int a;
	printf("This is display\n");
	display();
	printf("Display Function\n");
	goodmorning();
	goodafternoon();
	goodnight();
	return 0;
}

void display()
{
	printf("Display Display Fucktion\n");
}

void goodmorning()
{
	printf("Good Morning\n");
}

void goodafternoon()
{
	printf("Good Afternoon\n");
}

void goodnight()
{
	printf("Good Night\n");
}