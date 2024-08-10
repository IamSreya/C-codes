#include<stdio.h>
int main(){
    int n,m;
    printf("Enter any two number: ");
    scanf("%d%d",&n,&m);
    int rem;
    while (rem=0){
        int rem = n%m;
        rem %= m;
    }
        printf("%d",rem);
return 0;
}