//WAP to input the number of ROWs and Columns and input the elements and then print the 2-D array
#include<stdio.h>
int main()
{
int row,column;
printf("Enter rows and column of the array: ");
scanf("%d%d",&row,&column);
int arr[row][column];
printf("Enter the elements: \n");
for (int i = 0;i<row;i++){
    for (int j = 0;j<column;j++)
    {
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
}
printf("The elements are: \n");
for (int i = 0;i<row;i++){
    for (int j = 0;j<column;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
return 0;
}