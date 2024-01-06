#include <stdio.h> 

int main() 
{ 
	int original_number = 123454321; 
	int reversed = 0; 
	int num = original_number; 

	while (num != 0) { 
		int r = num % 10; 
		reversed = reversed * 10 + r; 
		num /= 10; 
	} 

	if (original_number == reversed) { 
		printf(" %d is a palindrome number", 
			original_number); 
	} 
	else { 
		printf( 
			" %d, No palindrome number", 
			original_number); 
	} 
	
	return 0; 
}
