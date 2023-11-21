#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter your number:");
    scanf("%d",&num1);
    if(num1 % 2 ==0){
        printf("Given number is even");
    }
    else
    {
        printf("Given number is odd");
    }
    return 0;
}