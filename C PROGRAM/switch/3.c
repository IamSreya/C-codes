//Write a program to input two integers and find their sum, difference, multiplication, division and modulus using a switch case. 
#include<stdio.h>
int main(){
    int x;
    int y;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    char operator;
    fflush(stdin);
    printf("Enter the operator: ");
    scanf("%c",&operator);
    switch (operator){
        case '+':
            printf("%d",x+y);
            break;
        case '-':
            printf("%d",x-y);
            break;
        case '*':
            printf("%d",x*y);
            break;
        case '/':
            if(y==0){
                printf("Infinite");
                break;
            }
            printf("%0.2f",(float)x/y);
            break;
        case '%':
            if(y==0){
                printf("Infinite");
                break;
            }
            printf("%d",x%y);
            break;
    }
    return 0;
}