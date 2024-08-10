//Write a program to print the first ‘n’ natural number in ascending order
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int number = 0;
    while(number<=n){
        printf("%d\t",number);
        number++;
    }
    return 0;
}
