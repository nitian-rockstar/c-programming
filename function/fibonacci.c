#include <stdio.h>
int fib(int n){
   if(n<=1){
    return n;
    }
     else {
    return fib(n-1)+fib(n-2);   
    }
}
int main () {
    int n;
 printf("enter the number :");
    scanf("%d",&n);
    if(n<0){
         printf("please ! enter the positive number.\n");
    return 1;
    }
    else{
   printf("The %dth Fibonacci term is: %d\n", n, fib(n));
 }
    return 0;
}