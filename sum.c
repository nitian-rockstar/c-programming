#include <stdio.h>
int main()
{
    int n,table,i;
    printf("enter the number n : ");
    scanf("%d" , &n);
    for(int i=1;i<=10;i++) {
table = i*n;
printf("%d\n",table);
    }  
    return 0;
}