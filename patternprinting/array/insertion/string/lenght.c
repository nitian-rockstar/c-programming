#include <stdio.h>
int main () {
    int n;
    char str[100];
      printf("enter the string :");
    // for(int i=0;i<'\n';i++){
    //     printf("enter the character of str[%d] :",i);
    //     scanf("%c ",&str[i]);
    // }
  scanf("%s",str);
    
    
    printf("\nthe string entered is :");
    printf("%s",str);
    int length =0;
    while(str[length]!='\0'){
        length++;
    }
    printf("\n");
    printf("the length of the string is : %d.",length);
    return 0;
}