//WAP to input any number and reverse it using recursion.

#include<stdio.h>
int reverse(int n){
    if (n/10 == 0)  return n;
    else return (n%10)*10 + reverse(n/10);
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("%d is the reverse digit",reverse(n));
    return 0;
}