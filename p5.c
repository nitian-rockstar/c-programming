#include <stdio.h>
int main() {
    int n;
    printf("enter the number of rows :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int num =1;
        for(int j=0;j<n-i-1;j++){
            printf("   ");
        }
        for (int j=0;j<=i;j++){
            if(j>0){
                num = num*(i-j+1)/j;
            }
            printf("%-5d",num);
        }
    
    printf("\n");
}
return 0;
}