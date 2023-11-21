//Calculator
#include <stdio.h>
#include <math.h>

int main() {
    int first_num, second_num;
    char Operator;

    printf("Enter first value: ");
    scanf("%d", &first_num);

    printf("Enter second value: ");
    scanf("%d", &second_num);

    printf("Which operation do you want (+, -, *, /): ");
    scanf(" %c", &Operator);

    switch (Operator) {
        case '+':
            printf("Result: %d + %d = %d\n", first_num, second_num, first_num + second_num);
            break;
        case '-':
            printf("Result: %d - %d = %d\n", first_num, second_num, first_num - second_num);
            break;
        case '*':
            printf("Result: %d * %d = %d\n", first_num, second_num, first_num * second_num);
            break;
        case '/':
            if (second_num != 0) {
                printf("Result: %d / %d = %.2lf\n", first_num, second_num, (double)first_num / second_num);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
