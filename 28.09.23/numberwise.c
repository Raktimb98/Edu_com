#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter 1st value: ");
    scanf("%d", &num1);
    printf("Enter 2nd value: ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("first value should be less than or equal to the second value.\n");
    }
    else
    {
        printf("Numbers between %d and %d is:\n", num1, num2);
        for (int i = num1; i <= num2; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
