#include <stdio.h>
int main() {
    float arr[10];
    printf("enter the value of array\n");
    for(int i=0;i<10;i++){
    printf("enter the value of arr[%d]",i);
    scanf("%f",&arr[i]);
}
printf("\n");
float sum=0;
printf("displaying sum of of all values of array\n");
for(int i=0;i<10;i++){
    sum+=arr[i];
}
printf("the sum is %.2f\n",sum);
float average =sum/10;
printf("The average of the values of array is %.2f\n.",average);
return 0; 
}