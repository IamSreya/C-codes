//Write a program to input lower limit and upper limit and print all the odd numbers in that range using call by value without return.
#include<stdio.h>

void odd_numbers(int ll,int ul){
    int i = ll;
    while(i<=ul){
        if(i%2){
            printf("%d\t",i);
            }
            i++;
    }
}
int main(){
    int ll,ul;
    printf("Enter the lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    odd_numbers(ll,ul);
    return 0;
}