#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number & 1) {
        printf("The last bit is set (1).\n");
    } else {
        printf("The last bit is not set (0).\n");
    }

    return 0;
}
