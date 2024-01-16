// #include <stdio.h>
// int main() {
//     int n,a;
//     int m,b;
//     printf("enter the number of rows of an matrix 1 :");
//     scanf("%d",&n);
//     printf("\n");
//      printf("enter the number of coloumn of an matrix 1 :");
//     scanf("%d",&m);
// printf("enter the elements of a matrix 1 :");
//     int array[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",&array[i][j]);
//         }
//     }
//         printf("enter the number of rows of an matrix 2 :");
//     scanf("%d",&a);
//     printf("\n");
//      printf("enter the number of coloumn of an matrix 2 :");
//     scanf("%d",&b);
// printf("enter the elements of a matrix 2 :");
//     int arrayy[a][b];
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             scanf("%d",&arrayy[i][j]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("%d ",array[i][j]);
//         }
//     }
//     printf("\n");
//      for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             printf("%d ",arrayy[i][j]);
//         }
//     }
//      int sum[n][m];
//      for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             sum[i][j]+=(array[i][j] + arrayy[i][j]);
//         }
//     }
// printf("\n");
//   for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("%d ",sum[i][j]);
//         }
//   }
// return 0;
// // }
// #include <stdio.h>

// #define MAX_ROWS 10
// #define MAX_COLS 10

// int main() {
//     int mat1[MAX_ROWS][MAX_COLS], mat2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
//     int rows, cols;

//     printf("Enter the number of rows and columns of the matrices: ");
//     scanf("%d %d", &rows, &cols);

//     printf("Enter elements of matrix 1:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("Enter element mat1[%d][%d]: ", i, j);
//             scanf("%d", &mat1[i][j]);
//         }
//     }

//     printf("Enter elements of matrix 2:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("Enter element mat2[%d][%d]: ", i, j);
//             scanf("%d", &mat2[i][j]);
//         }
//     }

//     // Adding matrices without using a separate function
//     printf("\nMatrix 1:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d\t", mat1[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\nMatrix 2:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d\t", mat2[i][j]);
//         }
//         printf("\n");
//     }

//     // Adding matrices and displaying the result
//     printf("\nSum of the matrices:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             result[i][j] = mat1[i][j] + mat2[i][j];
//             printf("%d\t", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
#include <stdio.h>
#define max_row 10
#define max_cols 10

int main () {
int mat1[max_row][max_cols],mat2[max_row][max_cols],sum[max_row][max_cols];
int row,cols;
printf("enter the number of rows of matrices :");
scanf("%d",&row);
printf("enter the number of column of matrices :");
scanf("%d",&cols);
printf("\n entering element of matrix 1\n");
for(int i=0;i<row;i++){
    for(int j=0;j<cols;j++){
        printf("enter the element mat1[%d][%d] :",i,j);
        scanf("%d",&mat1[i][j]);
    }
}
printf("\n entering element of matrix 2\n");
for(int i=0;i<row;i++){
    for(int j=0;j<cols;j++){
        printf("enter the element mat1[%d][%d] :",i,j);
        scanf("%d",&mat2[i][j]);
    }
}
printf("\nmatrix 1 :\n");
for(int i=0;i<row;i++){
    for(int j=0;j<cols;j++){
        printf("%d\t",mat1[i][j]);
    }
    printf("\n");
}
printf("\n matrix 2\n");
for(int i=0;i<row;i++){
    for(int j=0;j<cols;j++){
        printf("%d\t",mat2[i][j]);
    }
    printf("\n");
}
printf("\nthe difference of two matrices are :\n ");
for(int i=0;i<row;i++){
    for(int j=0;j<cols;j++){
       sum[i][j]= mat1[i][j] - mat2[i][j];
    }
}
for(int i=0;i<row;i++){
    for(int j=0;j<cols;j++){
         printf("%d\t",sum[i][j]);
    }
    printf("\n");
}
return 0;
}