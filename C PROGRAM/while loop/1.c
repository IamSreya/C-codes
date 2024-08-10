//Write a program to print the first ‘n’ natural number in ascending and descending order.(using while loop) 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(n>0){
        printf("%d\t",n);
        n--;
    }
    return 0;
}