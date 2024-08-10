//write a program to input lower limit and upper limit and print the factorial of each number using call by value with/without(whatever you want) return.
#include<stdio.h>

void fact_number(int ll,int ul){
    for(int i=ll;i<=ul;i++){
        printf("The factorial of %d is",i);
        int fact = 1;
        for(int j=1;j<=i;j++){
            fact*=j;
        }
        printf("%d\n",fact);
    }
}
int main(){
    int ll,ul;
    printf("Enter lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    fact_number(ll,ul);
    return 0;
}