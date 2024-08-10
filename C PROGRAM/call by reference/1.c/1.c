//Write a program to input two numbers and print the sum, difference, multiplication, division of those numbers using call by reference  with return. (use different functions for different operation)

#include<stdio.h>

int addition(int *a,int *b){
    return *a + *b;
}
int substraction(int *c,int *d){
    return *c-*d;
}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("%d + %d = %d\n",a,b,addition(&a,&b));
    printf("%d - %d = %d\n",a,b,substraction(&a,&b));
    return 0;
}