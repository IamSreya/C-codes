//Write a program to input lower limit and upper limit and print all the prime numbers in that range.
#include<stdio.h>
#include<math.h>
int main(){
    int ll,ul;
    printf("Enter the lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    for(int i = ll;i<=ul;i++){
        int count = 0;
        for (int j=2;j<=sqrt(i);j++){
            if (i%j==0){
                count++;
            }
            count==0?printf("%d is a prime number",i):printf("%d is not a prime number",i);
        }
        printf("\n");
    }
    return 0;
}