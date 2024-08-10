//write a program to input lower limit and upper limit and print the factorial of each number.(using while loop)
#include<stdio.h>
int main(){
    int ll,ul;
    printf("Enter lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    int i = ll;
    while(i<=ul){
        printf("The factorial of %d is",i);
    int fact=1;
        int j = 1;
        while(j<i){
            fact*=j;
            j++;
            printf("%d",fact);
        }
        i++;
    }
    return 0;
}
