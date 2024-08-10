//Write a program to input any number and print the multiplication table of that number using call by reference  without return.

#include<stdio.h>

void multiply(int *n){
    for(int i = 1;i<=10;i++){
        printf("%d * %d = %d\n",*n,i,*n * i);
    }
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    multiply(&n);
    return 0;
}