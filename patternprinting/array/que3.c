#include <stdio.h>
int main() {
    int n;
    printf("enter the length of an array :");
    scanf("%d",&n);

    int array[n];
    int frequency[101]={0};
    for(int i=0;i<n;i++){
        printf("enter %d element number:",i+1);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
      frequency[array[i]]++;
    }
     printf("\n");
   
     for(int i=0;i<n;i++){
       if(frequency[i]>0){
       printf("%d is %d times \n",i,frequency[i]);
            
         }
     }
    return 0;
}