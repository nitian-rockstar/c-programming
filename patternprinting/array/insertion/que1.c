#include <stdio.h>
void insertion(int arr[],int n);
void printarr(int arr[],int size);
int main () {
    int n;
   
    printf("enter the length of the array :");
    scanf("%d",&n);
    int arr[n];
    // int arr[]={1,2,4,1,5,8};
    // // n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        printf("value of %d is :",i+1);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    printf("\n Unsorted array :\n");
    printarr(arr,n);
    
    insertion(arr,n);
    printf("\n sorted array\n");
    printarr(arr,n);
return 0;
}
 void insertion(int arr[],int n){
    int key,j;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    
 }
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


