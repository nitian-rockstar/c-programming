#include <stdio.h>
#define max_size 10
#define max_char 500
int main() {
    char strA[max_size];
    int  frequency[max_char];
    int ascii;
    printf("enter the string value :");
    gets(strA);
    for(int i=0;i<max_char;i++){
        frequency[i]=0;
    }
      int i=0;
    while(strA[i]!='\0'){
       ascii=(int)strA[i];
       frequency[ascii]+=1;
        i++;
    }
   int max=0;
   for(int i=0;i<max_char;i++){
    if(frequency[i] >frequency[max])
max=i;
   }
    printf("\n");
        printf("maximum occuring character is '%c': %d times\n", max, frequency[max]);
return 0;
}