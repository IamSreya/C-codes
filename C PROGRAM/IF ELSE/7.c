//Write a program to check if a person is eligible to vote in India  or not.
#include<stdio.h>
int main(){
    int x;
    printf("Enter the age:");
    scanf("%d",&x);
    if (x>=18){
        printf("Eligible to vote");
    }
    else printf("Not eligible to vote");
    return 0;
}