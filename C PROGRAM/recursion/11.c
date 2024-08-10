//WAP to input any number ‘N’ and check either it is divisible by 11 or not using recursion.

#include<stdio.h>

float divisible(int n){
    int y = n;
    if(n%11==0) return y;
    else return 0;
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("%d is divisible",divisible(n));
    return 0;
}