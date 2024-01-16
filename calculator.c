#include <stdio.h>
int main() {
    float sum,substract,multiply,divide;
    int a,b;
    char command;
    printf("enter the value of a : \n ");
    scanf("%d",&a);
    printf("enter the value of b : \n ");
    scanf("%d",&b);
    printf("enter the command(sum = 's',substract = 'M', multiply = 'm', divide = 'd') : ");
    scanf("%s",&command);
    if(command == 115){
        sum = a + b;
        printf("sum is : %f \n",sum);
    } else if(command == 77){
        substract = a-b;
        printf("the substraction is : %f\n",substract);
    } else if(command == 109){
        multiply = a*b;
        printf("the multiplication is %f\n",multiply);
    
    } else if(command == 100){
        divide = a/b ;
printf("the division is : %f\n",divide);
 } else 
 printf("enter the correct input ");

    return 0;

}