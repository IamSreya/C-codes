//wap to find the roots of a quadratic equation and find the real and imaginary roots,if the roota are real then print them else print "roots are imaginary"
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the value of a, b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    int d = b*b- 4*a*c;
    // printf("%d is the D\n",d);
    if (d>=0){
        float x1,x2;
        x1=((-b)+sqrt(d))/(2*a);
        x2=((-b)-sqrt(d))/(2*a);
        printf("The roots are %0.2f and %0.2f",x1,x2);
    }else{
        printf("Roots are imaginary");
    }
    return 0;
}