#include<stdio.h>

int power(int x,int y){
    if (y == 0) return 1;
    return x*power(x,y-1);
}
int main(){
    int x,y;
    printf("Enter the value of x and y: ");
    scanf("%d%d",&x,&y);
    printf("%d is the answer",power(x,y));
    return 0;
}