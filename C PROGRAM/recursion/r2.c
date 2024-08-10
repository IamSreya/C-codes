//print sum of n natural numbers using recursion
#include<stdio.h>
int s;
int sum(int n){
    if(n==0) return 0;
    else return n+sum(n-1);
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}