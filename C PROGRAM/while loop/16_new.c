//Write a program to print fibonacci series upto n.(using while loop)
#include<stdio.h>
int main(){
    int a = 0,n,b = 1;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    n-=2;
    while(n--){
        int x=a+b;
        printf("%d\t",x);
        a=x;
        b=x+b;
    }
    return 0;
}