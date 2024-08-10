//WAP to input 10 integers in an 1-D array & check the number of strong numbers in that array using function call by value with return.


#include<stdio.h>

int strong(int num){
    int copy = num;
    int sum = 0;
    while(num>0){
        int f = 1;
        int digit = num%10;
        for(int i = 1;i<=digit;i++){
            f*=i;
        }
        sum+=f;
        num/=10;
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
    for (int i = 0;i<10;i++)
    {
        printf("%d\n",strong(arr[i]));
    }
    return 0;
}