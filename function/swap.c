#include <stdio.h>
void swap(int *a,int *b){
    int swap;
    swap= *a;
    *a=*b;
    *b=swap;
   
}
int main () {
    int a,b;
    printf("enter the first number :");
    scanf("%d",&a);
     printf("enter the second number :");
    scanf("%d",&b);
    printf("Before swapping (Call by Reference): num1 = %d, num2 = %d\n", a, b);

    swap(&a,&b);
    printf("After swapping (Call by Reference): num1 = %d, num2 = %d\n", a, b);
    return 0;
}