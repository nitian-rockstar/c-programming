#include <stdio.h>
int main () {
    int temp;
    printf("enter the temperature in centigrade :");
    scanf("%d",&temp);
    if(temp<0)
    {
        printf("Today is Freezing weather\n");
    } else  if(temp>=0 && temp<10)
    {
        printf("Today is Very Cold weather\n");
    }
    else  if(temp>=10 && temp<20)
    {
        printf("Today is Cold weather\n");
    }
    else  if(temp>=20 && temp<30)
    {
        printf("Today is Normal weather\n");
    }
    else  if(temp>=30 && temp<40)
    {
        printf("Today is Hot weather\n");
    }
    else  if(temp>=40 && temp<50)
    {
        printf("Today is Very Hot weather\n");
    }
    return 0;
}