//write a program to input lower limit and upper limit and print the multiplication table of each number.(using while loop)
#include<stdio.h>
int main(){
    int ll,ul;
    printf("Enter lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    int i = ll;
    while(i<=ul){
    printf("The multiplication table of %d is: \n",i);
    int j = 1;
    while(j<=10){
        printf("%d * %d = %d\n",i,j,i*j);
        j++;
    }
    i++;
    }
    return 0;
}