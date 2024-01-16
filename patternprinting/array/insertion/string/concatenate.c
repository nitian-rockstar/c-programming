#include <stdio.h>
int main () {
    char strA[100];
    char strB[100];
    char strC[200];
    printf("enter the value of string A:");
    scanf("%s",strA);
     printf("enter the value of string B:");
    scanf("%s",strB);
    int i=0;
    int j=0;
    printf("\n original string A\n");
    printf("%s",strA);
    printf("\n");
    printf("\n original string B\n");
    printf("%s",strB);
    while(strA[i]!='\0'){
        strC[j]=strA[i];
        i++;
        j++;
    }
   int m=0;
 while(strB[m]!='\0'){
        strC[j]=strB[m];
        m++;
        j++;
    }
strC[j]='\0';
printf("\n concatenate string\n");
    printf("%s",strC);
    return 0;
}