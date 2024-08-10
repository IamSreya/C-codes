//Write a program to print fibonacci series up to nth term.(using for loop) 
#include <stdio.h>
int main(){
int num;
printf("Enter nth term:");
scanf("%d",&num);
    int a = 0, b = 1;
    for (int i = 0; i < num; i += 2)
    {
        printf("%d\t%d\t", a, b);
        a = a + b;
        b = a + b;
    }
    return 0;
}