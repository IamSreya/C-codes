//Write a program to input any number & print 20 numbers in descending order from that number.(using while loop)
#include<stdio.h>
int main(){
    int num;
    printf("Enter input: ");
    scanf("%d",&num);
    int i = num;
    while(i>num-20){
        printf("%d\n",i);
        i--;
    }
    return 0;
}