#include<stdio.h>
int main(){
    int a;
    char c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    fflush(stdin); //cleans the input buffer
    printf("Enter the value of char: ");
    scanf("%c",&c);
    printf("\n%d\t%c",a,c);
    return 0;
}