#include<stdio.h>

int convert(int n,int b){
    if (n==0) return 0;
    int rem = n%b;
    convert(n/b,b);
    printf("%d",rem);
}
int main(){
    int n,b;
    printf("Enter any number and its base");
    scanf("%d%d",&n,&b);
    printf("%d",convert(n,b));
    return 0;
}