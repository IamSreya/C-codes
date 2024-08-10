//write a program to input lower limit and upper limit and print the factorial of each number.
#include<stdio.h>
int main(){
    int ll,ul;
    printf("Enter lower limit and upper limit:");
    scanf("%d%d",&ll,&ul);
    for (int i = ll;i<=ul;i++){
        // printf("sdjhjlsydvv")
        int fact = 1;
        for (int j = 1;j<i;j++){
            fact*=j;
        }
        printf("%d\n",fact);
    }
    return 0;
}