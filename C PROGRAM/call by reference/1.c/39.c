//write a program to input lower limit and upper limit and print the number of factors of each number using call by reference  with/without(whatever you want) return.

#include<stdio.h>

void factors(int *ll,int *ul){
    for(int i = *ll;i<=*ul;i++){
        printf("No. of factors of %d is\n",i);
        int count = 0;
        for (int j = 1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        printf("%d\n",count);
    }
}
int main(){
    int ll,ul;
    printf("Enter lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    factors(&ll,&ul);
    return 0;
}