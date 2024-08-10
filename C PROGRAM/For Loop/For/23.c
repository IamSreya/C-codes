//write a program to input lower limit and upper limit and print the factors of each number
#include<stdio.h>
int main(){
    int ul,ll;
    printf("Enter upper limit and lower limit: ");
    scanf("%d%d",&ul,&ll);
    for(int i=ll;i<ul;i++){
                printf("The factors of %d\n",i);
        for (int j=1;j<=i;j++){
            if(i%j==0){
                printf("%d\t",j);
            }
        }
    }
    return 0;
}