//Write a program to input any number and print “correct” if it is 10 else print “Incorrect” using function call by reference  with return.
#include<stdio.h>

int check(int *x){
    if (*x==10) return 1;
    else if (*x!=10) return -1;
}
int main(){
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    if (check(&x)==1) printf("correct");
    if (check(&x)==-1) printf("incorrect");
    return 0;
}