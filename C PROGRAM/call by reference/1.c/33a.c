//Write a program to print fibonacci series up to n using call by reference  without return.

#include<stdio.h>

void fibonacci(int *n){
    int a = 0,b = 1;
    printf("%d,%d,",a,b);
    int c = a+b;
    while(c<*n){
        printf("%d,",c);
        a = b;
        b = c;
        c = a + b;
    }
}
int main(){
    int n;
    printf("Enter the n term: ");
    scanf("%d",&n);
    fibonacci(&n);
    return 0;
}