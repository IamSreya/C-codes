//Write a Program to multiply two positive numbers without using * operator using call by value with return.
#include<stdio.h>

int multiply(int m,int n){
    int mul = 0;
    for(int i = 1;i<=n;i++){
        mul+=m;
    }
    return mul;
}
int main(){
    int m,n;
    printf("Enter value of m and n: ");
    scanf("%d%d",&m,&n);
    printf("The product is %d",multiply(m,n));
    return 0;
}