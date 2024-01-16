#include <stdio.h>
int main () {
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int isprime=1;
    if(n < 2){
isprime =0;
    }
    else {
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                isprime=0;
                break;
            }
        }
    }
    if(isprime){
        printf("the number %d is a prime number. \n",n);
    }else {
        printf("the number %d is not a prime number. \n",n);
    }
    printf("the prime number between 1 and %d is :\n",n);
    for(int i=2;i<=n;i++){
        isprime =1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
isprime=0;
break;
            }
        }
        if(isprime){
            printf("%d ",i);
        }

    } 
    return 0;
}