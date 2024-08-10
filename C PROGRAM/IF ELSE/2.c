//Write a program to input any number and print “correct” if it is 10 else print “Incorrect”.
#include<stdio.h>
int main(){
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if(n==10)
    {
        printf("correct");
    }
    else
    {
        printf("incorrect");
    }
    return 0;
}