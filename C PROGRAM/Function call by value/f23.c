//Write a Program to input any Number and count the number of digits using call by value with return
#include<stdio.h>

int count(int n){
    int count = 0;
    while(n>0){
        int digit = n%10;
        count++;
        n/=10;
    }
        return count;
}
int main(){
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("The count of number in the digit is %d",(count(n)));
    return 0;
}