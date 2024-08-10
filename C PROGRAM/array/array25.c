//WAP to input 10 integers in an 1-D array and print the sum of digits of all the numbers using function call by value with return.
#include<stdio.h>
int sum(int num){
    int sum = 0;
    while(num>0){
        int digit = num%10;
        sum+=digit;
        num/=10;
    }
    return sum;
}
int main(){
    int arr[10];
    printf("Enter the elements: ");
    for (int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("The sum is: \n");
    for (int i = 0;i<10;i++){
        printf("%d \n",sum(arr[i]));
    }

    return 0;
}