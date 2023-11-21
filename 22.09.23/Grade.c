#include <stdio.h>

int main() {
    int num;
    printf("Enter your marks: ");
    scanf("%d", &num);

    if (num >= 90 && num <= 100) {
        printf("Your grade is A");
    } else if (num >= 70 && num <= 89) {
        printf("Your grade is B");
    } else if (num >= 50 && num <= 69) {
        printf("Your grade is C");
    } else if (num < 50 && num >= 0) {
        printf("Your grade is D");
    } else {
        printf("Invalid marks");
    }

    return 0;
}
