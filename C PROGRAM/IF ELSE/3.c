//Write a program to input any number and check whether it is even or odd.
#include<stdio.h>
int main(){
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    if (!(x%2)){
        printf("Even");
    }
    else printf("Odd");
    return 0;
}