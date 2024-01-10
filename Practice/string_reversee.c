// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    
   char str[100] = "raghav";
   
   printf("%s\n", str);
   int len = strlen(str);
   
   int j;
   
   for (int i = 0, j = len - 1; i <= j; i++, j--)
   {
       int temp = str[i];
       str[i] = str[j];
       str[j] = temp;
   }
    
    printf("%s\n", str);

    return 0;
}
