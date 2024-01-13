#include <stdio.h>

int a = 10;

int fuc() {
    int a = 20;
    int b = 5;
    
    printf("a=%d, b=%d\n", a, b);
    
    return a + b;
}

int main() {
    // Write C code here
    printf("Hello world\n");
    printf("a = %d\n", a);
    
    int result = fuc();
    printf("Sum from fuc: %d\n", result);
    
    return 0;
}



