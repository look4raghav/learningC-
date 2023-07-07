#include <stdio.h>
#include <string.h>

struct employee
{
	int code;
	float salary;
	char name[20];
};

int main()
{
	struct employee e1, e2, e3;

	printf("code e1 \n");
	scanf("%d", &e1.code);
	printf("salary e1 \n");
	scanf("%f", &e1.salary);
	printf("name e1 \n");
	scanf("%s", e1.name);

	printf("code e2 \n");
	scanf("%d", &e2.code);
	printf("salary e2 \n");
	scanf("%f", &e2.salary);
	printf("name e2 \n");
	scanf("%s", e2.name);

	printf("code e3 \n");
	scanf("%d", &e3.code);
	printf("salary e3 \n");
	scanf("%f", &e3.salary);
	printf("name e3 \n");
	scanf("%s", e3.name);

	return 0;
}