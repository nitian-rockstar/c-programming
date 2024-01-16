#include <stdio.h>
int main () {
    int rows;;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        int num = i;
        int spaces = rows -i;

        // Print spaces
        for (int j = 1; j <= spaces; j++) {
            printf("   ");
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d  ", num);
            num++;
        }

        // Print decreasing numbers
        for (int j = 1; j < i; j++) {
            printf("%d  ", num - 2);
            num--;
        }

        printf("\n");
    }
return 0;
}
