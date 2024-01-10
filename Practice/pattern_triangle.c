// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("Hello world\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            printf("%d ", j);
        }printf("\n");
    }

    return 0;
}
