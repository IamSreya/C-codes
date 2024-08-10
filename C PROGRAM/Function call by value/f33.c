//Write a Program to input any number and check whether it is Armstrong Number (A three digit number in which the sum of cube of all digits is equal to the number. Eg:- 371=33+73+13) or not using function call by value with return.

#include<stdio.h>
#include<math.h>

int armstrong(int num){
    int count = 0;
    int copy = num;
    int y = num;
    while(num>0){
        int digit = num%10;
        count++;
        num/=10;
    }
    int x = 0;
    while(copy>0){
        int d = copy%10;
        x+=pow(d,count);
        copy/=10;
    }
    if(x==y) return 1;
    else return 0;
}
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(armstrong(num)==1) printf("An armstrong number");
    else printf("Not an armstrong number");
    return 0;
}