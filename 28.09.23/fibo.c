#include <stdio.h>

int main() {
    int n, i;
    long long int fib1 = 0, fib2 = 1, nextTerm;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms: \n", n);

    // Special case for the first two terms (0 and 1)
    if (n >= 1) {
        printf("%lld, ", fib1);
    }
    if (n >= 2) {
        printf("%lld, ", fib2);
    }

    // Generate and print the Fibonacci series for the remaining terms
    for (i = 3; i <= n; i++) {
        nextTerm = fib1 + fib2;
        printf("%lld", nextTerm);

        if (i < n) {
            printf(", ");
        }

        fib1 = fib2;
        fib2 = nextTerm;
    }

    printf("\n");

    return 0;
}
