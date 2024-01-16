#include <stdio.h>
int prime(int n,int divisor){
    while(n%divisor==0){
        printf("%d  ",divisor);
    
    n/=divisor;
    }
    prime(n,divisor+1);
}
int main () {
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    printf("the prime factors are :");
    prime(n,2);
    return 0;
}