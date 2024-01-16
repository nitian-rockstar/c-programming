#include <stdio.h>
int main() {
    float F,C;
    char temp,c,f;
    printf("choose the option youy want to proceed: F for to convert in celcius or C for to conert in fehrenheit\n");
    scanf("%c",&temp);
    if(temp == 'f' || temp == 'F'){
printf("enter the temperature in fahrenheit :\n");
scanf("%f",&F);
C =(F-32)*5/9;
printf("the temperature in celcius is : %f\n",C);
 }
 else if(temp == 'c'|| temp == 'C'){
    printf("enter the temperature in celsius :\n");
    scanf("%f",&C);
    F=9*C/5+32;
    printf("the temperature in fahrenheit is : %f",F);
 }else{
    printf("invalid character is enter, please enter a correct alphabet");

 }
 return 0;
}