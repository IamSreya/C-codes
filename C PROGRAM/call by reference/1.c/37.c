//write a program to input lower limit and upper limit and print the factorial of each number using call by reference  with/without(whatever you want) return.

#include<stdio.h>

void factorial(int *ll,int *ul){
    for(int i = *ll;i<=*ul;i++){
        printf("factorial of %d is\n",i);
        int f = 1;
        for (int j = 1;j<=i;j++){
            f*=j;
        }
        printf("%d\n",f);
    }
}
int main(){
    int ll,ul;
    printf("Enter lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    factorial(&ll,&ul);
    return 0;
}