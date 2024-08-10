#include<stdio.h>
int main(){

int arr[5], i;
for (i=0; i<5; i++)
    {
    printf("%d\t", arr+i);
    }
    printf("\nEnter 5 numbers: ");
    for (i=0;i<5;i++){
        scanf ("%d",arr+i);
    }
    for (i=0; i<5; i++){
        printf("%d\t", *(arr+i));
    }   
return 0;
}