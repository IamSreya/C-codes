//WAP to input any 3X3 matrix and find the biggest number in it.
#include<stdio.h>
int main()
{
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
int large = arr[0][0];
for (int i = 0;i<3;i++)
{
    for (int j = 0;j<3;j++)
    {
        if (large<arr[i][j])
        {
            large = arr[i][j];
        }
    }
}
printf("%d is the largest among elements",large);
return 0;
}