#include <stdio.h>

typedef struct date
{
	int year;
	int month;
	int date;
}date;

void display(date d)
{
	printf("The date is : %d/%d/%d\n", d.date, d.month, d.year);
}

int dateCmp(date d1, date d2)
{
	if (d1.year>d2.year)
	{
		return 1;
	}
	if (d1.year<d2.year)
	{
		return -1;
	}
	if (d1.month>d2.month)
	{
		return 1;
	}
	if (d1.month<d2.month)
	{
		return -1;
	}
	if (d1.date>d2.date)
	{
		return 1;
	}
	if (d1.date<d2.date)
	{
		return -1;
	}
	return 0;
}

int main()
{
	date d1 = {01, 4, 06};
	date d2 = {01, 4, 06};
	display(d1);
	display(d2);
	int a = dateCmp(d1, d2);
	printf("Date comparison : %d\n", a);
	return 0;
}