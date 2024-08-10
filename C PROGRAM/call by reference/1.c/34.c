//Write a program to print fibonacci series up to n using call by reference  without return.

#include<stdio.h>

void fibonacci(int *n){
        int a=0,b=1,c;
        printf("%d,%d,",a,b);
    for(int i = 3;i<=*n;i++){
        c = a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
}
int main(){
    int n;
    printf("enter range: ");
    scanf("%d",&n);
    fibonacci(&n);
}