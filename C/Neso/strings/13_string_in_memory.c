#include <stdio.h>

int main() {
    char str[] = "Hello";

    // Print the entire string
    printf("The string is: %s\n", str);

    // Print each character individually
    printf("Characters in the string:\n");
    for (int i = 0; i < 6; i++) {
        printf("str[%d] = %c\n", i, str[i]);
    }

    return 0;
}
