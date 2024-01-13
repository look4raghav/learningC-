#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // char str[100] 
    char *str = (char *) malloc (sizeof(char) * 1000);
    printf("ENTER STRING\n");
    scanf("%s", str);
    
    int i;

    for (i = 0; str[i] != '\0'; ++i);
    
    printf("Length is %d\n", i);
    
    free(str);
    return 0;
}
