//print the sum of digits using a recursion.
#include<stdio.h>

int sod(int n){
    if(n/10==0) return n;
    return n%10+sod(n/10);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d is the sum of all the digits of %d",n,sod(n));
    return 0;
}