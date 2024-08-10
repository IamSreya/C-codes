//WAP TO INPUT ANY NUMBER n AND FIND THE SUM OF NATURAL NUMBERS ALONG WITH PRINTING THEM LIKE A SERIES
#include<stdio.h>

int sum(int n){

    if (n==0) return 0;
    else {
    printf("+ %d ",n);
    return n + sum(n-1);
    }
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("= %d",sum(n));
    return 0;
}