//Write a program to input any number and count the number of factors of that number.(using while loop)
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    int i = 1;
    int count = 0;
    while(i<=num){
        if(num%i==0){
            count++;
        }
        i++;
    }
    printf("The number of factors of %d is %d",num,count);
    return 0;
}