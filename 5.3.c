#include <stdio.h>
float force(float mass);

int main()
{
	float m;
	printf("Enter value of mass\n");
	scanf("%f", &m);
	printf("The value of force is %.0f\n", force(m));
	return 0;
}

float force(float mass)
{
	float result = mass * 9.8;
	return result;
}