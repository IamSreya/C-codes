//Write a program to input three numbers and find the smallest one (using ternary operator or conditional operator) using function call by reference  without return.

#include<stdio.h>
void check(int *x,int *y,int *z){
    *x<*y&&*x<*z? printf("%d is smallest\n",*x):printf("%d is not smallest\n",*x);
    *y<*x&&*y<*z? printf("%d is smallest\n",*y):printf("%d is not smallest\n",*y);
    *z<*x&&*z<*y? printf("%d is smallest\n",*z):printf("%d is not smallest\n",*z);

}
int main(){
    int x,y,z;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&x,&y,&z);
    check(&x,&y,&z);
    return 0;
}