//Write a program to input any year and check whether it is leap year or not using function call by reference  with return.
#include<stdio.h>

int check(int *x){
    if (*x%4) return 1;
    else return -1;
}
int main(){
    int x;
    printf("Enter any year: ");
    scanf("%d",&x);
    if (check(&x)==1) printf("not a leap year");
    if (check(&x)==-1) printf("leap year");
    return 0;
}