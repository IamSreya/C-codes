//Write a program to input three numbers and find the smallest one (using a logical operator) using function call by reference  with return

#include<stdio.h>

int check(int *x,int *y,int *z){
    if (*x<*y && *x<*z) return 1;
    if (*y<*x && *y<*z) return -1;
    else return 0;
}
int main(){
    int x,y,z;
    printf("Enter any number: ");
    scanf("%d%d%d",&x,&y,&z);
    if(check(&x,&y,&z)==1) printf("%d is smallest\n",x);
    else if(check(&x,&y,&z)==-1) printf("%d is smallest\n",y);
    else if(check(&x,&y,&z)==0) printf("%d is smallest\n",z);
    return 0;
}