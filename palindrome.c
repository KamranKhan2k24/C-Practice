#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(long long x) {
    if (x < 0)
        return false;

    long long original = x;
    long long reversed = 0;

    while (x > 0) {
        long long digit = x % 10;
        reversed = reversed * 10 + digit;
        x = x / 10;
    }

    return original == reversed;
}

int main() {
    long long x;

    printf("Enter a number: ");
    scanf("%lld", &x);

    if (isPalindrome(x))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}