//To make pascal triangle
#include <stdio.h>
int main () {
    int rows;
    printf("Enter the number of rows :");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        int num =1;
        for(int j=0;j<rows-i-1;j++){
            printf("   ");
        }
        for(int j=0;j<=i;j++){
           if(j>0){ num = num*(i-j+1)/j;
           }
        printf("%-5d",num);
    }
    printf("\n");
}
return 0;
}