#include <stdio.h>
int main () {
     int n;
    printf("enter the length of the string :");
    scanf("%d",&n);
    char strA[n];
    char strB[n];
    printf("enter the string value :");
    scanf("%s",strA);
     int i=0;
    while(strA[i]!='\0'){
        strB[n-1-i]=strA[i];
        i++;
    }
    strB[i]='\0';
   int j=0;
  int length=0;
   while(strA[j]!='\0' && strB[j]!='\0'){
        if(strB[j]==strA[j]){
            length=1;}
           else { length =0;
            break ;
           }
    j++;
    }
    if(length==1) printf("the string is palindrome. \n");
    else printf("the string is not palindrome.\n");
//  printf(" the  reverse string is %s ",strB);
puts(strB);
    
return 0;
}