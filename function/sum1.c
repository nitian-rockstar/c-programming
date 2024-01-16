//using recursion
#include <stdio.h>
int sumr(int n){
    if(n==0) return 0;
    else return n%10 +sumr(n/10);
}
int main() {
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    printf("the sum of all digit using recursion is : %d",sumr(n));
    return 0;
}