#include <stdio.h>
int main () {
    char strA[100];
    char strB[100];
    int max,ascii;
 printf("enter the value of string A:");
    scanf("%s",strA);
     printf("enter the value of string B:");
    scanf("%s",strB);
    int i=0;
    while(strA[i]!='\0' && strB[i]!='\0'){
     if(strA[i]!=strB[i]){
        printf("the strings are different .\n");
return 0;}
 i++;
    }
    if(strA[i]=='\0' && strB[i]=='\0'){
        printf("the strings are same .\n");
    } else printf("both strings are different\n");
    
    return 0;
}