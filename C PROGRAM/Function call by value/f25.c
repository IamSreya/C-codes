//Write a program to input any number and print the multiplication table of that number using call by value without return. 
#include<stdio.h>

void product(int num){
    int x;
    for(int i = 1;i<=10;i++){
        x = num*i;
        printf("%d * %d = %d\n",num,i,x);
    }
}
int main(){
    int num;
    printf("Enter any num: ");
    scanf("%d",&num);
    printf("The multiplication table is: \n");
    product(num);
    return 0;
}