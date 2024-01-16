#include <stdio.h>
void main() {
   /* printf("&\n");
    printf("&&\n");
    printf("&&&\n");
    printf("&&&&\n");
    printf("&&&&&\n");*/
    int n;
    printf("enter the value of n: \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    for(int j=0;j<i;j++){
            printf("&");
    }
    printf("\n");
        }
    }
