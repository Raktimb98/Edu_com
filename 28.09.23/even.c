#include <stdio.h>

int main() {
    int sum = 0;
    int num = 2; 
    while (num <= 100) {
        sum += num; //sum=sum+num
        num += 2; 
    }
    printf("The sum of even numbers between 1 and 100 is: %d\n", sum);
    return 0;
}
