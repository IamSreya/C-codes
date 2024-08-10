//Write a program to input any number and check if it is perfect or not (factors’ sum using call by reference  with) using function call by reference  with return.

#include<stdio.h>

int perfect(int *n){
    int sum = 0,copy_number = *n;
    for (int i = 1;i<*n;i++){
        if (*n%i==0)
        sum+=i;
    }
    if (sum == copy_number)
    return 1;
    else return 0;
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    if(perfect(&n))
    {
    printf("%d is perfect",n);
    }
    else printf("%d is not perfect",n);
    return 0;
}