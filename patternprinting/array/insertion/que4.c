#include <stdio.h>
void printarr(int arr[],int size);
void insertelement(int arr[],int *size,int position,int element);
int main () {
int size;
printf("enter the size of an array");
scanf("%d",&(size));
int arr[size];
for(int i=0;i<(size);i++){
printf("enter the value of arr[%d]",i);
scanf("%d",&arr[i]);
printf("\n");
}
int position ,element;
printf("enter the value of element which you want to insert :");
scanf("%d",&element);
printf("\n");
printf("enter the position where you want to insert the element %d :",element);
scanf("%d",&position);
printf("\n array without insertion of new element\n");
printarr(arr,size);
insertelement(arr,&size,position,element);
printf("\n array with insertion of new element\n");
printarr(arr,size);
return 0;
}
void insertelement(int arr[],int *size,int position,int element){
    if(position <0 || position> *size){
        printf("Invalid position : element can not be added .\n");
        return ;
    }
for(int i=*size;i>position;i--){
    arr[i]=arr[i-1];
}
arr[position]=element;
(*size)++;
}
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}