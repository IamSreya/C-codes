//WAP to input any number and find it’s prime factors using recursion.

#include<stdio.h>

void prime_factors(int n,int i){
    if(n%i==0)
{
    printf("%d",i);
}
prime_factors(n,i+1);
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(int i = 1;i<n;i++){
    prime_factors(n,2);
    }
    return 0;
}