#include <stdio.h>

int main() {
    printf("This is a program to demonstrate escape sequences:\n");

    // \a - Alert (bell) character
    printf("Alert (bell) character: \a\n");

    // \b - Backspace
    printf("Backspace: A B\bCD\n");

    // \t - Horizontal tab
    printf("Horizontal tab: Hello\tWorld\n");

    // \r - Carriage return (moves the cursor to the beginning of the line)
    printf("Carriage return: Line 1\rLine 2\n");

    // \n - Newline (moves the cursor to the beginning of the next line)
    printf("Newline: Line 1\nLine 2\n");

    return 0;
}
