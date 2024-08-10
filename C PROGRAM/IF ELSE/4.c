//Write a program to input any year and check whether it is leap year or not.
#include<stdio.h>
int main(){
    int x;
    printf("Enter any year: ");
    scanf("%d",&x);
    if (x%4==0){
        printf("Leap year");
    }
    else printf("It is not a leap year");
    return 0;
}