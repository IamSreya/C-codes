//Write a program to check if a person is eligible to vote in India  or not using function call by reference  with return
#include<stdio.h>

int check(int *x){
    if (*x>18) return 1;
    else return -1;
}
int main(){
    int x;
    printf("Enter any year: ");
    scanf("%d",&x);
    if (check(&x)==1) printf("eligible to vote");
    if (check(&x)==-1) printf("not eligible to vote");
    return 0;
}