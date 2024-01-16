#include <stdio.h>
int main () {
    double a,b;
    double result;
    char operator ;
    printf("enter the two number a and b \n");
    scanf("%lf%lf",&a,&b);
    printf("enter the condition(+,-,*,/) :\n");
    scanf(" %c",&operator);
    switch (operator)
    {
    case '+':
        result = a+b;
        printf("%.2lf\n",result);
        break;
    case '-':
    result = a-b; //a>b
      printf("%.2lf\n",result);
        break;
        case '*' :
        result = a*b;
          printf("%.2lf\n",result);
        break;
        case '/':
        if(b!=0){
        result = a/b;
          printf("%.2lf\n",result);}
          else {
            printf("error : division by zero is not allowed\n");
          }
        break;
    default:
    printf("enter the valid operator\n");
        break;
    }
    return 0;
}