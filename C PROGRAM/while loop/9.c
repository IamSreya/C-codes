//Write a program to input any number and check it is perfect or not(factors’ sum)(using while loop)
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    int i = 1,sum = 0;
    while(i<num){
        if(num%i==0){
            sum+=i;
        }
        i++;
    }
    (sum==num)?printf("It is a perfect number"):printf("Not a perfect number");
    return 0;
}