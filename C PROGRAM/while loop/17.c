//Write a program to print fibonacci series upto n.(using while loop)
#include<stdio.h>
int main(){
    int a = 0,n,b = 1;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    int c=a+b;
    while(c<n){
        printf("%d\t",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}