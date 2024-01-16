#include <stdio.h>
int main() {
    int a,b;
    float sum,average;
    printf("enter the two number :");
scanf("%d",&a);
scanf("%d",&b);
sum = a + b;
average = (a+b)/2;
printf("the sum of two number %d and %d is : %f \n",a,b,sum);
printf("the average of two number %d and %d is : %f \n",a,b,average);
return 0;
}