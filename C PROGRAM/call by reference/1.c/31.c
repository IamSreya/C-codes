//Write a program to input any number and check it is prime or not using call by reference  with return.

#include<stdio.h>
#include<math.h>
int check_prime(int *n){
    int count = 0;
    for(int i = 2;i<=sqrt(*n);i++){
        if(*n%i==0){
            count++;
        }
    }
    if(count == 0) return 1;
    else return 0;
}
int main(){
    int n;
    printf("Entre any number: ");
    scanf("%d",&n);
    if(check_prime(&n)==1) printf("%d is prime",n);
    else printf("%d is not prime",n);
    return 0;
}