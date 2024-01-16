#include <stdio.h>
int main() {
    float radius,length,height,width,side, area,base;
    char command;
    printf("enter the name of the shape(circle(c),square(s),rectangle(r),triangle(t)) you want to calculate area of :\n");
    scanf(" %c", &command);
    switch (command)
    {
    case 'c'/*  */:
        /* code */printf("enter the radius of the circle :\n");
        scanf("%f",&radius);
        area = 3.14*radius *radius;
        break;
    case 's':
    printf("enter the length of side of sqaure :\n");
    scanf("%f",&side);
   area = side*side;
   break;
   case 'r':
   printf("enter the lenght and width of the rectangle : \n");
   scanf("%f%f",&length,&width);
   area = length*width;
   break;
   case't':
   printf("enter the base and height of the triangle : \n");
scanf("%f%f",&base,&height);
area = 0.5*base*height;
break;
    default:
    printf("enter the correct command\n");
        break;
    }
    printf("the area of the shape is :%f\n",area);
    return 0;
}