//Write a Program to input any number and check whether it is Armstrong Number (A three digit number in which the sum of cube of all digits is equal to the number. Eg:- 371=3^3+73^+1^3) or not using function call by reference  with return.

#include<stdio.h>
#include<math.h>

int count_digit(int n){
    int count = 0;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
}

int armstrong_numbers(int *n){
    int sum = 0,copy_number = *n;
    int c=count_digit(copy_number);
    while(copy_number>0){
        // printf("%d\n",copy_number);
        int digit = copy_number%10;
        printf("%d -> ",digit);
        int p=pow(digit,c);
        printf("%d\t",p);
        sum+=p;
        printf("Sum is %d\n",sum);
        copy_number/=10;
        // printf("%d\n",copy_number);
    }
    return sum==*n;
}

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    if(armstrong_numbers(&n)) printf("%d is an armstrong number",n);
    else printf("%d is not armstrong\n",n);
    return 0;
}