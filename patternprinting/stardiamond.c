#include <stdio.h>
int main () {
    int n;
    printf("Enter the odd number of rows :");
    scanf("%d",&n);
    int nsp =0;
    int nst =n;
    int ml=(n/2)+1;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=nsp;j++){
printf(" "); 
} nsp++;
 for(int k=1;k<=nst;k++){
printf("*");
        }
        nst--;
        // if(i<ml){ nst=nst+2;
        //  nsp--;}
        //  else {nst=nst-2;
        //  nsp++;}
       
         printf("\n");
    }
 return 0;
}