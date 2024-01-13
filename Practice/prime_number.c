#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("ENTER NUMBER\n");
    scanf("%d", &n);
    
    int i;
    int flag = 1;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 0;  
            break;
        }
    }
    
    if (n <= 1) {
        printf("%d is Not Prime\n", n);
    } else if (flag) {
        printf("%d is Prime\n", n);
    } else {
        printf("%d is Not Prime\n", n);
    }
    
    return 0;
}
