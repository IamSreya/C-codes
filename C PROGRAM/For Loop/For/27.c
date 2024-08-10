//Write a program to input lower limit and upper limit and print all the strong numbers in that range.
#include<stdio.h>
int main(){
    int ll,ul;
    printf("Enter the lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    for (int i = ll;i<=ul;i++){
        int j;
        for(;j>0;){
            printf("%d",j);
            j/=10;
        }
    }
}