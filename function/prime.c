#include <stdio.h>
int prime(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
       printf("%d ",i);
        }
     }
}
int main () {
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    printf("the prime factors are :");
    prime(n);
    return 0;
}