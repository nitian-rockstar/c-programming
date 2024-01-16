#include <stdio.h>
int main () {
    int age;
    printf("please enter your age :\n");
    scanf("%d",&age);
    if(age>=18){
        printf("you are eligible for voting :\n");
    
    } else 
    printf("sorry: you are not eligible for voting ,please focus on study not on politics -_-\n");
    return 0;
}