#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i;
    printf("Please enter a number \n");
    scanf("%d", &number);
    for(i = 1; i <= 10; i++){
        printf("%d * %d = %d \n", number, i, number * i);
    }
    return 0;
}
