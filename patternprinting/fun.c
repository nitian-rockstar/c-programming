#include <stdio.h>
int main () {
    int n;
    printf("enter the number :");
     scanf("%d",&n);
    for(int i=0; ; i++){
       
         if(n%2==0) {
    
          scanf("%d",&n);
    
        } else{
            return 0;
        }
    
    }
    return 0;
}