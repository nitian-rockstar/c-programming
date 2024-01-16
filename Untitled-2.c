#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for later comparison

    // Reverse the number
    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
