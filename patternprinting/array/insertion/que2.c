#include <stdio.h>
int main () {
    int n;

    printf("enter the length of an array :");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("value of arr[%d]:",i);
    scanf("%d",&arr[i]);
}
int min_value =arr[0];
for(int i=1;i<n;i++){
    if(arr[i]<min_value){
        min_value=arr[i];

    }
}
printf("the smallest elements of an array is %d\n",min_value);
return 0;
}
