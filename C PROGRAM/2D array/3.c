//WAP to input any 3X3 matrix and find the smallest number in it.
#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter the elements: \n");
for (int i = 0;i<3;i++)
{
    for (int j = 0;j<3;j++)
    {
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
}
int small = arr[0][0];
for (int i = 0;i<3;i++)
{
    for (int j = 0;j<3;j++){
        if (small>arr[i][j]){
            small = arr[i][j];
        }
    }
}
printf("%d is the smallest among elements",small);
return 0;
}