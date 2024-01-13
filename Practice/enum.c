#include <stdio.h>

enum color {
    Red, Green, Blue
};

int main() {
    
    enum color color1, color2;
    
    color1 = Green;
    color2 = Blue;
    // Write C code here
    const int a = 15;
    
    printf("%d\n %d\n %d\n ", a, color1, color2);

    return 0;
}
