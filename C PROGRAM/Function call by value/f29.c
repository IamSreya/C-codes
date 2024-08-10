//Write a program to input any number and check if it is perfect or not (factors’ sum using call by value with) using function call by value with return.
#include<stdio.h>

int perfect(int num){
    int i = 1,sum=0;
    while(i<num){
        if (num%i==0){
            sum+=i;
        }
        i++;
    }
    if(sum==num) return 1;
    else return 0;
}
int main(){
    int num;
    printf("Enter any num: ");
    scanf("%d",&num);
    if(perfect(num)==1) printf("A perfect number");
    else if(perfect(num)==0) printf("Not a perfect number");
    return 0;
}