#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter the value of a : \n");
    scanf("%d",&a);
    printf("enter the value of b: \n");
    scanf("%d",&b);
    c = a;
    a =b;
    b = c;
    printf("the value of a is (after swapping ) : %d\n",a);
    printf("the value of b is (after swapping ) : %d\n",b);
    return 0;

}