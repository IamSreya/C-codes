//write a program to input lower limit and upper limit and print the multiplication table of each number.
#include<stdio.h>
int main(){
    int ul,ll;
    printf("Enter lower limit and upper limit: ");
    scanf("%d%d",&ll,&ul);
    for(int i=ll;i<=ul;i++){
        printf("Multiplication table of %d is :\n",i);
        for(int j = 1;j<11;j++){
            printf("%d * %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
