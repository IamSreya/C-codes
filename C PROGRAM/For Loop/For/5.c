//Write a Program to multiply two positive numbers without using * operator.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter number and multiplier: ");
    scanf("%d%d",&x,&y);
    int z = 0;
    for(int i=1;i<=y;i++)
    {
        z+=x;
    }
    printf("%d",z);
    return 0;
}