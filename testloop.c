#include <stdio.h>

int main() {
    long long num;

    // Input
    printf("Enter a number: ");
    scanf("%lld", &num);

    // Process each digit and print in words
    long long divisor = 1;
    while (num / divisor > 9) {
        divisor *= 10;
    }

    while (divisor > 0) {
        int digit = num / divisor;
        switch (digit) {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
            default:
                printf("Invalid digit ");
        }

        num %= divisor;
        divisor /= 10;
    }

    return 0;
}
