#include <stdio.h>
int main ()
{
    int radius;
    float area, circumference;
    printf("enter the radius of the circle : \n");
    scanf("%d",&radius);
    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;
    printf("the area of a circle is : %f \n", area);
    printf("the circumference of a circle is : %f \n",circumference);
    return 0;
}