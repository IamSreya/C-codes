#include<stdio.h>

int reverse(int n){
    if (n/10 == 0) return 0;
    return (n%10)*10 + reverse(n/10);
}
int main(){

    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("%d is the reverse digit",reverse(n));
    return 0;
}