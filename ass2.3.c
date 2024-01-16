#include <stdio.h>
int main()
{
    int basicpay;
    printf("enter the basic pay amount :\n");
    scanf("%d",&basicpay);
    float dearness,vehicle,houserent;
    dearness = 0.5*basicpay;
    vehicle =0.1 *basicpay;
houserent = 0.2*basicpay;
float grosssalary = basicpay+ dearness+ vehicle+ houserent;
printf("the gross salary of a person is given by %f \n",grosssalary);
return 0;
}