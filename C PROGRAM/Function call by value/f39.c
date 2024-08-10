//write a program to input lower limit and upper limit and print the factors of each number using call by value with/without(whatever you want) return.

#include<stdio.h>

void factors(ll,ul){
    for (int i = ll;i<=ul;i++){
        printf("The factors of %d are",i);
        for(int j = 1;j<=i;j++){
            if(i%j==0){
                printf("%d\t",j);
            }
        }
    }
}
int main(){
    int ll,ul;
    printf("Enter lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    factors(ll,ul);
    return 0;
}