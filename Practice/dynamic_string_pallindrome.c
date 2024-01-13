#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // char str[100] 
    char *str = (char *) malloc (sizeof(char) * 100);
    printf("ENTER STRING\n");
    scanf("%s", str);
    
    int length = strlen(str);
    
    int i;
    int j;
    
    for(i=0, j=length-1; i<=j; i++, j--)
        {
            int temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
        
    for (i = 0, j = length - 1; i <= j; i++, j--) 
    {
        if (str[i] != str[j]) {
            printf("NOT PALINDROME");
            free(str);
            return 0;
        }
    }

    printf("YES, It is palindrome\n");
    printf("Reversed String\n%s\n", str);
    
    free(str);
    return 0;
}
