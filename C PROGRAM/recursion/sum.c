#include<stdio.h>

int sum(int n){
    int s = 0;
    if(n/10 == 0) return n;
    s+=n%10;
    return s + sum(n/10);
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}