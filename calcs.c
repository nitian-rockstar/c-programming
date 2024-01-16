#include <stdio.h>
int main () {
    double a,b,c,result ;
    char operator;
    printf("Enter the value of a :");
scanf("%lf",&a);
 printf("Enter the value of b :");
scanf("%lf",&b);
printf("Enter the operator(+,-,*,/) :");
scanf(" %c",&operator);
switch (operator)
{
case '+':
result = a+b;
break;
    case '-' :
    result = a-b ||b-a;
    break;
case '*':
result = a*b;
break;
case '/':
result = a/b;
default:
printf("enter the correct operator \n ");
    break;
} printf("The result is : %2.lf\n",result);
return 0;
}