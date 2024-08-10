//WAP to input 10 integers in an 1-D array & print the factorial of each number using function call by value with return.
#include<stdio.h>

int factorial(int n){
        int f = 1;
        for(int j = 1;j<=n;j++){
            f*=j;
        }
        return f;
    }
int main(){
    int arr[10];
    printf("Enter the elements: \n");
    for (int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0;i<10;i++){
    printf("The factorial of %d is %d\n",arr[i],factorial(arr[i]));
    }
    return 0;
}