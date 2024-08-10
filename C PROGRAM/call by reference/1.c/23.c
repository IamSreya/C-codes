//Write a program to input lower limit and upper limit and print all the odd numbers in that range using call by reference  without return.

#include<stdio.h>
void odd_numbers(int *ll,int *ul){
    for (int i =*ll; i<=*ul;i++){
        if (i%2) printf("%d\n",i);
    }
}
int main(){
    int ll,ul;
    printf("Enter the lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    odd_numbers(&ll,&ul);
    return 0;
}