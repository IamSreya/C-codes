//Write a Program to input lower limit and upper limit and print all the perfect numbers in that range.
#include<stdio.h>
int main(){
    int ll,ul;
    printf("Enter the lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    for(int i = ll;i<=ul;i++){
        printf("The numbers is %d\n ",i);
        int sum = 0;
        for(int j = 1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        printf("Sum of the factors are: %d\n",sum);
        (sum==i)? printf("%d is a perfect number\n",i):printf("%d is not a perfect number\n",i);
    }

    return 0;
}