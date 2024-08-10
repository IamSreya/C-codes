//write a program to input lower limit and upper limit and print the no of factors of each number
#include<stdio.h>
int main(){
    int ul,ll;
    printf("Enter lower limit and upper limit: ");
    scanf("%d%d",&ll,&ul);
    for(int i=ll;i<=ul;i++){
        int count=0;
        printf("the number of factors of %d is :   ",i);
        for (int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}