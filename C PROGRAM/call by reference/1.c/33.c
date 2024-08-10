//Write a program to print fibonacci series up to the nth term using call by reference  without return.

#include<stdio.h>

void fibonacci(int *n){
    int a=0,b=1,c;
    for (int i = 1; i < *n; i += 2)
    {
        printf("%d\t%d\t", a, b);
        a = a + b;
        b = a + b;
    }
}
int main(){
    int n;
    printf("enter range: ");
    scanf("%d",&n);
    fibonacci(&n);
}