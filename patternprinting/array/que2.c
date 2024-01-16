#include <stdio.h>
int main () {
    int n;
    printf("enter the length of an array :");
    scanf("%d",&n);

    int array[n];
    for(int i=0;i<n;i++){
        printf("enter %d element number:",i+1);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    int array_new[n];
    for(int i=0;i<n;i++){
        array_new[i]=array[i];
        
    }
    printf("After copy of all elements the new array value are :");
   for(int i=0;i<n;i++){
        printf("%d ",array_new[i]);
    }
return 0;
}