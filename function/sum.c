//without using recursion
#include <stdio.h>
int sumr(int n){
int sum=0;
   while(n>0){
    sum+=n%10;
n/=10;
   }
   return sum;
}
int main () {
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("The sum of all the digits of the entered number is : %d",sumr(n));
    return 0;
}