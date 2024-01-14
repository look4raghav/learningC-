#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10; 
        sum += digit;        
        number /= 10;  
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
