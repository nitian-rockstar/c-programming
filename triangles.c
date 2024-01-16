#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the side a :");
    scanf("%d",&a);
    printf("Enter the side b:");
    scanf("%d",&b);
    printf("Enter the side c:");
    scanf("%d",&c);
    if(a==c && b==c){
        printf("the trianle is EQUILATERAL\n");
    }
else if(a==b||a==c||b==c){
printf("The trianle is ISOSCELES\n");
} else{
    printf("The trianle is : SCALENE\n");
} 
return 0;
}