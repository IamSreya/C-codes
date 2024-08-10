//Write a program to input any number and the factors of that number using call by reference  without return.
#include<stdio.h>

void factors(int *n){
    for (int i = 1;i<=*n;i++){
        if (*n%i==0) printf("%d\n",i);
    }
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("The factors are: ");
    factors(&n);
    return 0;
}