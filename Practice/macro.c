#include <stdio.h>

#define pi 3.14
#define sq(x) ((x)*(x))

typedef struct {
    int a;
    int b;
} points;

int main() {
    
    int n;
    // Write C code here
    printf("Enter for square\n");
    scanf("%d", &n);
    
    points pp;
    pp.a = 5;
    pp.b = 10;
    printf("Hello world\n%d\n%d\n", pp.a, pp.b);

    printf("PI: %f\n", pi);
    printf("Square of %d: %d\n",n, sq(n));

    return 0;
}
