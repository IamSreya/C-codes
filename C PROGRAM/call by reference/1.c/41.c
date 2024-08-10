//Write a Program to input lower limit and upper limit and print all the perfect numbers in that range using function call by reference  with/without(whatever you want) return

#include<stdio.h>

void perfect(int *ll,int *ul){
    for(int i = *ll;i<=*ul;i++){
        int count = 0;
        for (int j = 1;j<i;j++){
            if(i%j==0){
                count+=j;
            }
        }
        if (count == i) printf("%d\n",i);
    }
}
int main(){
    int ll,ul;
    printf("Enter lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    perfect(&ll,&ul);
    return 0;
}