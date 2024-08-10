//wap to input 3 no. and find the smallest one using ternary or conditional operator
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers:- ");
    scanf("%d%d%d",&a,&b,&c);
    (a<b)?a<c?printf("%d",a):printf("%d",c):b<c?printf("%d",b):printf("%d",c);
    return 0;
}