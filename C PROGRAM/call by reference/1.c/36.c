//write a program to input lower limit and upper limit and print the multiplication table of each number using call by reference  with/without(whatever you want) return.

#include<stdio.h>

void multiply(int *ll,int *ul){
    for(int i = *ll;i<=*ul;i++){
        printf("Multiplication table of %d is\n",i);
        for (int j = 1;j<=10;j++){
            printf("%d * %d = %d\n",i,j,i*j);
        }
    }
}
int main(){
int ll,ul;
printf("Enter lower and upper limit: ");
scanf("%d%d",&ll,&ul);
multiply(&ll,&ul);
return 0;
}