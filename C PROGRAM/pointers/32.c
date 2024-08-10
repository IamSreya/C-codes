#include<stdio.h>
int main(){
    int a[2][3];
    a[1][2] = 9;
    printf("%d\n",a[1,2]);
    printf("%d\n",a[1,1]);
    return 0;
}