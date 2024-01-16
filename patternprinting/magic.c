#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    int nst = n;
    int nsp=1;
    int b=1;
    for(int i=1;i<=2*n+1;i++){
        printf("%d",b);
        if(i<4) b++;
        else b--;
    } printf("\n");
    for(int i=1;i<=n;i++){
         int a=1;
        for(int j=1;j<=nst;j++){
            printf("%d",a);
            a++;
        } for(int k=1;k<=nsp;k++){
            printf(" ");
        }for(int j=1;j<=nst;j++){
            printf("%d",a-1);
    a--;
            }
        nsp+=2;
        nst--;
        printf("\n");

    }
    return 0;
}