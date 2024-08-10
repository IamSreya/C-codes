//Write a program to input any number and check whether it is a power of 2 or not.
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter any num: ");
    scanf("%d",&num);
    int i= sqrt(num);
    if(i%2==0){
        printf("its a power of 2");
    }
    else printf("not a power of 2");
    return 0;
}