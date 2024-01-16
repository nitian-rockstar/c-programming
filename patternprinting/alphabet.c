#include <stdio.h>
int main () {
    int n;
    char ch;
    
    printf("enter the number of rows :");
    scanf("%d",&n);
     printf("enter the instrustion for the capital(C) and small(S) to print alphabets :\n");
    scanf(" %c",&ch);
    for(int i=1;i<=n;i++){
        int isodd=1;
   if(i%2==0){
     isodd=0;
   }
 if(isodd){
    int b=1;
        for(int k=1;k<=i;k++){
                printf("%d ",b);
                b++;
            }
        }  else {
    if(ch=='C')
    { int a=65;
     for (int j=1;j<=i;j++){
        printf("%c ",a);
            a++;
      }
    } else {int a=97;
     for (int j=1;j<=i;j++){
        printf("%c ",a);
           a++;
}
         }
           }

printf("\n");
    }
    return 0;
}