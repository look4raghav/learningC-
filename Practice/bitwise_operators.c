// C Program to demonstrate use of bitwise operators
#include <stdio.h>
int main()
{
	unsigned char a = 5, b = 9;          // a = 5(00000101), b = 9(00001001)
	printf("a = %d, b = %d\n", a, b);
	printf("a&b = %d\n", a & b);
	printf("a|b = %d\n", a | b);
	printf("a^b = %d\n", a ^ b);
	printf("~a = %d\n", a = ~a);
	printf("b<<1 = %d\n", b << 1);
	printf("b>>1 = %d\n", b >> 1);
	return 0;
}












/* 
expected outputs are 
a = 5, b = 9
a & b = 1
a | b = 13
a ^ b = 12
~a = -6
b << 1 = 18
b >> 1 = 4
 */
