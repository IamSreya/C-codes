//Write a program to calculate x^y without using any library function using call by reference  with return

#include<stdio.h>
int exponent(int *x,int *y){
    int p = 1;
    for (int i = 1;i<=*y;i++){
        p*=*x;
    }
    return p;
}
int main(){
    int x,y;
    printf("Enter base and exponent: ");
    scanf("%d%d",&x,&y);
    printf("The answer is %d",exponent(&x,&y));
    return 0;
}