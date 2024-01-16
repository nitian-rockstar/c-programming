#include <stdio.h>
#define max_row 10
#define max_cols 10
int main () {
    int mat1[max_row][max_cols],mat2[max_row][max_cols],result[max_row][max_cols];
int rows;
int cols;
int row,col;
printf("enter the number of rows of matrix 1 :");
scanf("%d",&rows);
printf("enter the number of column of matrix 2 :");
scanf("%d",&cols);
printf("enter the number of rows of matrix 2 :");
scanf("%d",&row);
printf("enter the number of column of matrix 2 :");
scanf("%d",&col);
if(cols==row){
    printf("\n entering input of matrix 1\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("the value of mat1[%d][%d]:",i,j);
            scanf("%d",&mat1[i][j]);
            
        }
    } printf("\n");
     printf("\n entering input of matrix 2\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("the value of mat2[%d][%d]:",i,j);
            scanf("%d",&mat2[i][j]);
            
        }
    }printf("\n");
     printf("\n printing input of matrix 1\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            
            printf("%d\t",mat1[i][j]);
            
        }
        printf("\n");
    }
    printf("\n printing input of matrix 2\n");
 for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            
            printf("%d\t",mat2[i][j]);
            
        }
        printf("\n");
    }
    printf("\nprinting the product of matrices \n");
for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
        result[i][j]=0;
        for(int k=0;k<cols;k++){
        result[i][j]+=mat1[i][k]*mat2[k][j];

    }
 }
 }
for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            
            printf("%d\t",result[i][j]);
            
        }
        printf("\n");
    }

}
else printf("multiplication is only possible when column of mat1=row of mat2");
return 0;
}

