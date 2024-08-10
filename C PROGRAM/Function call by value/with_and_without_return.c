#include<stdio.h>

/* void check_even_odd(int n){
    if(n%2) printf("odd");
    else printf("even");
} */
int check_even_odd(int n){
    if(n%2) return 1;
    else return 0;
} 

int main(){
    int n;
    printf("Enter any number:- ");
    scanf("%d",&n);
    if(check_even_odd(n)) printf("Odd");
    else printf("Even");
    return 0;
}