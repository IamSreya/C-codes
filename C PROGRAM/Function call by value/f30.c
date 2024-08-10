//Write a program to input any number and check if it is a strong number (digits’ factorials’ sum is equal to that number) using function call by value with return.
#include<stdio.h>

int fact(int n){
    int f=1;
    for(int i=n;i>1;i--){
        f*=i;
    }
    return f;
}
int check_strong(int n){
    int sum=0,copy_n=n;
    while(n>0){
        int digit=n%10;
        sum+=fact(digit);
        n/=10;
    }
    return sum==copy_n;
}
int main(){
    int num;
    printf("Enter any num: ");
    scanf("%d",&num);
    if(check_strong(num)) printf("A strong number");
    else printf("not a strong number");
    return 0;
}