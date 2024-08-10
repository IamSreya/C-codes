#include<stdio.h>
#include<conio.h>
void main(){
    int num,n,i;
    printf("enter your number:");
    scanf("%d",&num);
    prime_factor(num);
    
}
void prime_factor(int num)
{
    int n,i;

for(n=0;n<=num;i++)
{

if(num%n==0){
for(i=2;i<n;i++){
    if(n%i==0)
    printf("hoitona");
    else
    printf("%d",i);
}
}


}
}
