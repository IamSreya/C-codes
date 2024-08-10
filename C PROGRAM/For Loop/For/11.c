//Write a program to calculate x^y without using any library function
#include<stdio.h>
int main()
{
    int num,exp;
    printf("Enter number and exponent: ");
    scanf("%d%d",&num,&exp);
    int y=1;
    for(int i=1;i<=exp;i++)
    {
        y*=num;
    }
    printf("%d",y);
    return 0;
}