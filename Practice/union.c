#include <stdio.h>

union MyUnion {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    union MyUnion data;

    data.intValue = 42;

    printf("Integer Value: %d\n", data.intValue);

    data.floatValue = 3.14;

    printf("Float Value: %f\n", data.floatValue);
    
    printf("String Value: %s\n", data.stringValue);

    return 0;
}
