//WAP to input any two 3X3 matrices and add them and store the resultant matrix into another one
#include<stdio.h>
int main()
{
    int f_arr[3][3],n_arr[3][3],r_arr[3][3];
    printf("Enter the elements for first array: \n");
    for (int i = 0;i<3;i++)
    {
    for (int j = 0;j<3;j++)
{
        scanf("%d",&f_arr[i][j]);
    }
    printf("\n");
}
    printf("Enter the elements for second array: \n");
    for (int i = 0;i<3;i++)
{
    for (int j = 0;j<3;j++)
    {
        scanf("%d",&n_arr[i][j]);
    }
    printf("\n");
}
for (int i = 0;i<3;i++)
{
    for (int j = 0;j<3;j++)
    {
        r_arr[i][j] = f_arr[i][j] + n_arr[i][j];
    }
    printf("\n");
}
for (int i = 0;i<3;i++)
{
    for (int j = 0;j<3;j++)
    {
        printf("%d",r_arr[i][j]);
    }
    printf("\n");
}
return 0;
}