#include <stdio.h>

int main() {
    char str[] = "Hello, World!";  // String literal
    char ch = 'A';                 // Character literal

    // Using double quotes for string literals
    printf("This is a string: %s\n", str);  // Outputs: This is a string: Hello, World!

    // Using single quotes for character literals
    printf("This is a character: %c\n", ch);  // Outputs: This is a character: A

    // Another example with a single character from the string
    printf("First character of the string: %c\n", str[0]);  // Outputs: First character of the string: H

    return 0;
}
