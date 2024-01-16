#include <stdio.h>
int main () {
    char stra[100];
    char str[100];
    printf("Enter the string word :");
    scanf("%s",&stra);
    printf("\n original string\n");
    printf("%s",stra);
    char temp;
    printf("\n string  after copy to another string:\n");
    int i=0;
while(stra[i] !='\0'){
    temp=stra[i];
str[i]=temp;
i++;
}
str[i]='\0';
printf("\n");
printf("%s\n",str);
return 0;
}