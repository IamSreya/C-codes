//WAP to input 10 integers in an 1-D array & check the number of perfect numbers in that array using function call by value with return.
#include<stdio.h>

int perfect(int num){
    int copy = num;
    int sum = 0;
        for(int i = 1;i<num;i++){
            if (num%i==0) sum+=i;
        }
    if(sum == copy) return copy;
    else return 0;
}
int main(){
    int arr[10];
    printf("Enter the elements: ");
    for (int i = 0;i<10;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("The perfect elements are");
    for (int i = 0;i<10;i++)
    {
        printf("%d\n",perfect(arr[i]));
    }
    return 0;
}