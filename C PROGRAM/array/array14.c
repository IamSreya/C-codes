//WAP to input 10 elements in an 1-D array and count the number of even and odd numbers in that array.
#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter the elements: ");
    for(int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0,num = 0;
    printf("The odd elements are: ");
        for(int i = 0;i<10;i++){
            if (arr[i]%2)
            {printf("%d\t",arr[i]);
            count++;
            }
        }
        printf("The number of odd elements is:%d\n",count);
        printf("Even elements are: ");
        for (int i = 0;i<10;i++){
            if (arr[i]%2==0)
            {printf("%d\n",arr[i]);
            num++;
            }
        }
    printf("No. of even elements is: %d",num);
    return 0;
}