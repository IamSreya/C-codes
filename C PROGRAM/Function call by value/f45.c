//Write a program to input any number 'n' and digit 'd' also and check the frequency of d in n using function call by value with return
#include<stdio.h>

int frequency(int n,int d){
    int freq=0;
    for(;n;n/=10){
        // if(d==n%10) freq++;
        freq+=(d==n%10);
    }
    return freq;
}
int main(){
    int n,d;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("Enter the digit: ");
    scanf("%d",&d);
    printf("%d is the frequency of %d in %d",frequency(n,d),d,n);
}