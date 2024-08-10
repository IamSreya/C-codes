//Write a program to input any number 'n' and digit 'd' also and check the frequency of d in n

#include<stdio.h>
int main(){
    int n,d,count=0;
    printf("Enter any number and digit to be checked: ");
    scanf("%d%d",&n,&d);
    while(n>0){
        int digit = n%10;
        if (d==digit){
            count++;
        }
        n/=10;
    }
    printf("%d",count);
    return 0;
}