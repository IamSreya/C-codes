//write a program to input lower limit and upper limit and print the factors of each number using call by reference  with/without(whatever you want) return.

#include<stdio.h>

void factors(int *ll,int *ul){
    for(int i = *ll;i<=*ul;i++){
        printf("factors of %d is\n",i);
        for (int j = 1;j<=i;j++){
            if(i%j==0){
                printf("%d\n",j);
            }
        }
    }
}
int main(){
    int ll,ul;
    printf("Enter lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    factors(&ll,&ul);
    return 0;
}