//Write a program to input any year and check whether it is leap year or not using function call by value with return.
#include<stdio.h>
int check(int num){
    if(num%4==0) return 1;
    else return 0;
}
int main(){
    int num;
    printf("Enter any year: ");
    scanf("%d",&num);
    if(check(num)) printf("A leap year");
    else printf("Not a leap year");
    return 0;
}