//Write a program to input any number and check whether it is even or odd using function call by reference  with return.

#include<stdio.h>

int check(int *x){
    if (*x%2) return 1;
    else return -1;
}
int main(){
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    if (check(&x)==1) printf("odd");
    if (check(&x)==-1) printf("even");
    return 0;
}