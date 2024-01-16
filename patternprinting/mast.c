#include <stdio.h>
int main () {
    int n;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    int nsp=n-1;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
           
        } 
         nsp--;
         int a=65;
        for(int k=1;k<=i;k++){
            printf("%c ",a);
            a++;
        }int b=a-2;
        for(int m=1;m<=i-1;m++){
            printf("%c ",b);
            b--;
           
        }
        printf("\n");
    } 
    return 0;
}