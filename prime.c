#include <stdio.h>

int main() {
    // Check if a number is prime
    int num;
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &num);

    int isPrime = 1; // Assume the number is prime initially

    if (num < 2) {
        isPrime = 0; // Numbers less than 2 are not prime
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // The number has a factor other than 1 and itself
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    // Print prime numbers up to n
   /* int n;
    printf("Enter a value of n to print prime numbers up to n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d:\n", n);
    for (int i = 2; i <= n; i++) {
        isPrime = 1; // Assume the number is prime initially

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // The number has a factor other than 1 and itself
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");*/

    return 0;
}
