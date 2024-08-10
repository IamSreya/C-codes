//write a program to input lower limit and upper limit and print the no of factors of each number.(using while loop)
#include<stdio.h>
int main(){
    int ll,ul;
    printf("Enter lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    int i = ll;
    while (i<=ul){
        printf("The factors of %d are: \n",i);
        int count = 0;
        int j = 1;
        while(j<=i){
            if(i%j==0){
                printf("%d\n",j);
                count++;
            }
            j++;
        }
        printf("The number of factors of %d is %d\n",i,count);
        i++;
    }
    return 0;
}