#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0)
    {
        printf("Enter a valid age.\n");
    }
    else if (age < 13)
    {
        printf("You are a child.\n");
    }
    else if (age < 20)
    {
        printf("You are a teenager.\n");
    }
    else
    {
        printf("You are an adult.\n");
    }

    return 0;
}
