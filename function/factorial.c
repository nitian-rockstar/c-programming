#include <Stdio.h>
unsigned long long fac(int n){
   if(n==0 || n==1){
    return 1;
   } else {
        return n* fac(n-1);
   }
    
}
int main(){
    int n; printf("enter the number :");
    scanf("%d",&n);
    if(n<0){
        printf("factorial of a negative number is not defined.\n");
    } else {
        printf("factorial of %d is %llu\n",n,fac(n));
    }
    return 0;
}