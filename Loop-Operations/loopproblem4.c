// This code calculates the power of a given positive integer raised to another positive integer using an iterative approach.
// It prompts the user to enter two positive numbers, computes the power using a loop, and then prints the result.  
#include <stdio.h>

int power(unsigned int, unsigned int);

int main() {
    unsigned int x, n;

    printf("Enter 2 positive numbers: ");
    scanf("%u%u", &x, &n);

    int result = power(x, n);

    printf("%u to the power %u = %d\n", x, n, result);

    return 0;
}

int power(unsigned int x, unsigned int n) {
    int result = 1;
    int i;

    for (i = 1; i <= n; i++) {
        result = result * x;
    }

    return result;
}