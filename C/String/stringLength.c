#include <stdio.h>
#include <string.h>


// program to find string length using strlen() function

void main() {
    char string1[20];
    int len;
    printf("Enter any name: ");
    scanf("%s", &string1);
    len =  strlen(string1);
    printf("Length of name is: %d", len);
}


// ============================================================================
// ============================================================================


// program to find string length without using strlen() function
