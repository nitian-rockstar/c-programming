#include <stdio.h>
int main () {
    int n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int num=i;
int space =n-i;
for(int j=1;j<=space;j++){
printf("   ");
} for(int j=1;j<=i;j++){
    printf("%d  ",num);
    num++;
}for(int j=1;j<i;j++){
    printf("%d  ",num-2);
    num--;
} printf("\n");
    
} return 0;
}