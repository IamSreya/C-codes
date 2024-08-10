//Write a program to calculate x^y without using any library function(using while loop) 
#include<stdio.h>
int main(){
    int num,exp;
    printf("Enter any number and it's exponent: ");
    scanf("%d%d",&num,&exp);
    int i = 1,y=1;
    while(i<=exp){
        y*=num;
        i++;
    }
    printf("%d",y);
    return 0;
}