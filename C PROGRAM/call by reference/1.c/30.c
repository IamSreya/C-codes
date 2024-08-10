//Write a program to input any number and count the number of factors of that number using call by reference  with return.

#include<stdio.h>

int count(int *n){
    int count = 0;
    for(int i = 1;i<=*n;i++){
        if(*n%i==0){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("%d is the count",count(&n));
    return 0;
}