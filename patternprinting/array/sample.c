#include <stdio.h>
int main() {
    int n[5]={};
    int i=1;
    int *p;
    p=&i;
//     printf("enter the value of your class :");
//     for(int i=0;i<5;i++){
//         scanf("%d",&n[i]);
    
//     printf("%u\n",&n[i]);
// }
printf("%d\n",i);
p++;
printf("%u",p);
return 0;
}
