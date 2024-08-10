#include<stdio.h>

int func(int a){
    if (a==0) return a;
    return a + func(a+1);
}
int main(){
    printf("%d \n",func(6));
    printf("%d \n",func(6));
    return 0;
}