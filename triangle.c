#include <stdio.h>
#include <math.h>
int main() {
 int a,b,c;
 float area,s,perimeter;
 printf("enter the length of side a :\n");
 scanf("%d",&a);   
 printf("enter the length of side b :\n");
 scanf("%d",&b);  
 printf("enter the length of side c :\n");
 scanf("%d",&c);  
 s = (a+b+c)/2;
 area = pow(s*(s-a)*(s-b)*(s-c),0.5);
 perimeter = s*2;
 printf("the perimetr of triangle is: %f \n",perimeter);
printf("the area of a triangle is : %f",area);
return 0;
}