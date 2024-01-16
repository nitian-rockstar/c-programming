#include <stdio.h>
#define max_row 3
#define max_cols 3
#define max_name 20
#include <string.h>
int findname(char str[max_row][max_cols][max_name], const char *name);
int main () {
    printf("\nenter the value of string.\n");
   char strA[max_row][max_cols][max_name];
    for(int i=0;i<max_row;i++){
        for(int j=0;j<max_cols;j++){
printf("value of str[%d][%d]:",i,j);
scanf("%s",&strA[i][j]);
        }
    }
    
//  char strA[max_row][max_cols][max_name] = {
//         {"Alice", "Bob", "Charlie"},
//         {"David", "Eva", "Frank"},
//         {"Grace", "Henry", "Ivy"}
//     };
    char searchname[max_name];
    printf("\n Enter the name you want to search in the string :\n");
    scanf("%s",&searchname);

   if (findname(strA , searchname)){
printf("the name %s is found in the list .",searchname);
   }
   else {
printf("the name %s is not found in the list .",searchname);
   }
   
    return 0;

}
int findname(char str[max_row][max_cols][max_name],const char *name){
    for(int i=0;i<max_row;i++){
        for(int j=0;j<max_cols;j++){
         if(strcmp(str[i][j],name)==0){
            return 1;
         }     
      }
    }
    return 0;
}