#include <stdio.h>

void callbyvalue(int x) {
    x++;
    printf("callbyvalue function: %d\n", x);
}

void callbyref(int *y) {
    (*y)++;
    printf("callbyref function: %d\n", *y);
}

int main() {
    int num = 5;
    int num2 = 2;
    callbyvalue(num);
    printf("callbyvalue function: %d\n", num);
    callbyref(&num2);
    printf("callbyref function: %d\n", num2);

    return 0;
}
