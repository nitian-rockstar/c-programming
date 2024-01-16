#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter the value of angle a:");
    scanf("%d",&a);
    printf("enter the value of angle b:");
    scanf("%d",&b);
    printf("enter the value of angle c:");
    scanf("%d",&c);
    if(a+b+c==180){
        printf("the triangle is valid\n");
    }
    else {
        printf("the troangle is not valid \n ");
    }
return 0;
}