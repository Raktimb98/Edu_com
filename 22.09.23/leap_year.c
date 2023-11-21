#include<stdio.h>
int main(){
    int num;
    printf("Enter the year you want to check:");
    scanf("%d",&num);
if ((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0)){
printf("Given year is leap year");
}
else{
    printf("Given year is not leap year!");
}
return 0;
}