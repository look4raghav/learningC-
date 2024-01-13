#include <stdio.h>

typedef struct {
    int a;
    int b;
} points;

int main() {
    // Write C code here
    points pp;
    pp.a = 5;
    pp.b = 10;
    printf("Hello world\n %d\n %d\n", pp.a, pp.b);

    return 0;
}
