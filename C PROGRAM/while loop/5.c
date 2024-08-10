//Write a program to input lower limit and upper limit and print all the odd numbers in that range.(using while loop) 
#include<stdio.h>
int main(){
    int ll,ul;
    printf("Enter lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    int i=ll;
    while(i<ul){
        if(i%2!=0){
        printf("%d\t",i);
        i+=2;
        }
    }
    return 0;
}