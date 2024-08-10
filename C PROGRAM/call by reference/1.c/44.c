//Write a program to input any number 'n' and digit 'd' also and check the frequency of d in n using function call by reference  with return.

#include<stdio.h>

int frequency(int *n,int *d){
    int count = 0;
    while(*n>0){
        int digit = *n%10;
        if(*d == digit) count++;
        *n/=10;
    }
    return count;
}
int main(){
    int n,d;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("Enter the number to be checked: ");
    scanf("%d",&d);
    printf("%d appeared %d times",d,frequency(&n,&d));
    return 0;
}