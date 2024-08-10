//Write a program to input lower limit and upper limit and print all the odd numbers in that range.(using for loop)
#include<stdio.h>
int main(){
    int ll,ul;
    printf("Enter the lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    int i = ll;
    printf("The odd numbers are: \n");
    while (i<=ul){
        if(i%2!=0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}