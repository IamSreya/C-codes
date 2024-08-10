//Write a program to input lower limit and upper limit and print all the prime numbers in that range using function call by value with/without(whatever you want) return.
#include<stdio.h>

void prime(int ll,int ul){
    for (int i = ll;i<=ul;i++){
        int count = 0;
        for(int j = 2;j<i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            printf("%d\t",i);
        }
    }
}
int main(){
    int ll,ul;
    printf("Enter lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    printf("The prime numbers are: \n");
    prime(ll,ul);
    return 0;
}