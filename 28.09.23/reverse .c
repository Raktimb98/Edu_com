#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    int originalNum = num; // Store the original number for later comparison

    // Reverse the number using a while loop
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reverse);

    // Check if the reversed number is equal to the original number
    if (originalNum == reverse) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
