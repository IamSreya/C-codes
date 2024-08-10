//WAP to input 10 integers in an 1-D array and find the smallest one using function call by value with return.
#include<stdio.h>
int smallest_value(int arr[10])
{
    int small = arr[0];
    for (int i = 1;i<10;i++)
    {
        if (arr[i]<small)
        {
            small = arr[i];
        }
    }
    return small;
}
int main(){
    int arr[10],i;
    printf("Enter elements in the array: ");
    for (i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Smallest element is %d",smallest_value(arr));
    return 0;
}