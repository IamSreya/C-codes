//Write a program to input any number and check whether it is positive or negative or zero using function call by reference  with return.
#include<stdio.h>

int check(int *x){
    if (*x>0) return 1;
    else if (*x<0) return -1;
    else if (*x == 0) return 0;
}
int main(){
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    if (check(&x)==1) printf("positive");
    if (check(&x)==-1) printf("negative");
    if (check(&x)==0) printf("zero");
    return 0;
}