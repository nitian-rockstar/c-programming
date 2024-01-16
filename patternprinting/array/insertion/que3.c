#include <stdio.h>
void rotatearray(int arr[],int size);
void printarray(int arr[],int size);
int main () {
   int size;
   printf("enter the limit of an array :") ;
   scanf("%d",&size);
   int arr[size];
   printf("enter the value of array\n");
for(int i=0;i<size;i++){
   printf("value of arr[%d] is :",i+1);
   scanf("%d",&arr[i]);
}
printf("\n");
printf("\noriginal array\n");
printarray(arr,size);
printf("\n");
printf("\nArray after rotation\n");
rotatearray(arr,size);
printarray(arr,size);
return 0;
}

void rotatearray(int arr[],int size){
    int temp=arr[size-1];
    for(int i=size-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}