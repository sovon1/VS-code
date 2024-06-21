#include <stdio.h>

void attemptModification(char *str) {
    // Attempt to modify the string literal (undefined behavior)
    str[0] = 'h';  // This is unsafe and should be avoided
}

void modifyArray(char arr[]) {
    // Valid modification
    arr[0] = 'h';
}

int main() {
    char *strLiteral = "Hello, World!";
    char charArray[] = "Hello, World!";

    // Uncommenting the following line will cause undefined behavior
    // attemptModification(strLiteral);

    // Valid modification
    modifyArray(charArray);

    printf("String literal: %s\n", strLiteral);  // Outputs: Hello, World!
    printf("Character array: %s\n", charArray);  // Outputs: hello, World!

    return 0;
}
/*String literals are stored in read-only memory, and modifying them results in
 undefined behavior. They are accessed via pointers.

Character arrays are stored in writable memory and can be modified.
 They can be initialized with string literals but occupy separate memory.*/
