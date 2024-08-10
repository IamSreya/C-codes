//WAP to input any decimal number and convert the number to binary, octal and hexadecimal using recursion.
#include<stdio.h>

int convert(int n,int b){
    if (n==0) return 0;
    int rem = n%b;
    convert(n/b,b);
    if (rem>10){
        rem = 'A' + (rem - 10);
    }
    printf("%d",rem);
}
int main(){
    int n,b;
    printf("Enter any number and its base: ");
    scanf("%d%d",&n,&b);
    printf("%d",convert(n,b));
    return 0;
}