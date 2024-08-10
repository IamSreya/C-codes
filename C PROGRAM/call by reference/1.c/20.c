//Write a Program to multiply two positive numbers without using * operator using call by reference  with return.

#include<stdio.h>
int sum = 0; 
int multiply(int *n,int *m){
    for(int i = 1;i<=*m;i++){
        sum+=*n;
    }
    return sum;
}
int main(){
    int n,m;
    printf("Enter two positive numbers: ");
    scanf("%d%d",&n,&m);
    printf("%d * %d = %d",n,m,multiply(&n,&m));
    return 0;
}