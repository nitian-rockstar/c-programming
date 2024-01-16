#include <stdio.h>
int main () {
 int weeknum;

 printf("enter the week number :");
 scanf("%d",&weeknum);
 
    if(weeknum==1){
        printf("the week day is: MONDAY\n");}
        else if(weeknum==2){
        printf("the week day is :TUESDAY\n");
    }
    else if(weeknum==3){
        printf("the week day is : WEDNESDAY\n");
}else if(weeknum==4){
        printf("the week day is : THURSDAY\n");}
 else if(weeknum==5){
        printf("the week day is : FRIDAY\n");}
    else if(weeknum==6){
        printf("the week day is : SATURDAY\n");}
        else if(weeknum==7){
        printf("the week day is : SUNDAY\n");}
        else printf("Entered number is invalid please enter between 1 -7\n");
        return 0;
}
        
                   