#include <stdio.h>

int main() {
    char buffer[50];

    printf("Enter a string: ");
    gets(buffer);  // Insecure: gets does not perform buffer size checking
    gets(buffer);  // Do it again for fun

    printf("You entered: %s\n", buffer);
    return 0;
}
