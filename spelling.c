#include <stdio.h>
int main () {
    int digit ;
    printf("Enter the counting from 0 to 9 :");
    scanf("%d",&digit);
    switch(digit)
    {
        case 0:
        printf("The spelling of %d is zero \n",digit);
        break;
         case 1:
        printf("The spelling of %d is one \n",digit);
        break;
         case 2:
        printf("The spelling of %d is Two \n",digit);
        break;
         case 3:
        printf("The spelling of %d is Three \n",digit);
        break;
         case 4:
        printf("The spelling of %d is four\n",digit);
        break;
         case 5:
        printf("The spelling of %d is five \n",digit);
        break;
         case 6:
        printf("The spelling of %d is six \n",digit);
        break;
         case 7:
        printf("The spelling of %d is seven \n",digit);
        break;
         case 8:
        printf("The spelling of %d is Eight\n",digit);
        break;
         case 9:
        printf("The spelling of %d is Nine\n",digit);
        break;
        default :
        printf("Please : Enter the number between 0 to 9 \n");
        break;
    }
    return 0;
    }