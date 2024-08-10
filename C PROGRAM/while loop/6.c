//Write a program to input any number and print the multiplication table of that number.(using while loop)
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    int i = 1;
    printf("The multiplication table of %d is\n",num);
    while(i<=10){
        printf("%d * %d = %d\n",num,i,num*i);
        i++;
    }
    return 0;
}