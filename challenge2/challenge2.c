#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i, j, space;
    printf("Please enter number of rows \n");
    scanf("%d", &number);
    for(i = 1; i <= number; i++){

        for(space = 1; space <= number - i; space++){
            printf(" ");
        }

        for(j = 1; j <= (i * 2 -1); j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
