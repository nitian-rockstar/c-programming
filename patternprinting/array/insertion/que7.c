#include <stdio.h>
int main() {
    int arr[5];
    printf("enter the value of array\n");
    for(int i=0;i<5;i++){
    printf("enter the value of arr[%d]",i);
    scanf("%d",&arr[i]);
}
printf("original array\n");
 for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
printf("\n");
int new_arr[5];
for(int i=0;i<5;i++){
    new_arr[i]=arr[i];
}printf("\n");
int swap;
swap=new_arr[1];
new_arr[1]=new_arr[4];
new_arr[4]=swap;
printf("new array after the reverse\n");
 for(int i=0;i<5;i++){
        printf("%d\t",new_arr[i]);
    }
return 0; 
}
