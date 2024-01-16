#include <stdio.h>
int main() {
    int n;
    printf("enter the length of the string :");
    scanf("%d",&n);
    char strA[n];
   char strB[n];
   printf("enter the string :");
   scanf("%s",strA);
   int i=0;
   while(strA[i]!='\0'){
    strB[n-1-i]=strA[i];
    i++;
   }
    strB[i]='\0';
   printf(" the  reverse string is %s ",strB);
   return 0;
}