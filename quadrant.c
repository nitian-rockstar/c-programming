#include <stdio.h>
int main() {
    int x,y;
    printf("Enter the co-ordinates of x:");
    scanf("%d",&x);
     printf("Enter the co-ordinates of y:");
    scanf("%d",&y);
if(x>0 && y>0) {
    printf("The quadrant of the co-ordinates is : 1st\n");
} else if(x>0 && y<0){
     printf("The quadrant of the co-ordinates is : 4th\n");
} else if(x<0 && y<0){
     printf("The quadrant of the co-ordinates is : 3rd\n");
}else if(x<0 && y>0){
     printf("The quadrant of the co-ordinates is : 2nd\n");
} else {
    printf("The enter co-ordinates is orgin in plane\n");
}
return 0;}