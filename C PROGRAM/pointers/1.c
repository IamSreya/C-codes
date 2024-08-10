#include<stdio.h>
int main(){
    int a = 5,*ptr;
    ptr = &a;
    printf("Enter a number: ");
    scanf("%d",ptr);
    printf("%d\t%d\t",a,*ptr);
    return 0;
}