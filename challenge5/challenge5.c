#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i, number_inverse;
    printf("Please enter a number \n");
    scanf("%d", &number);
    while(number != 0){
        number_inverse *= 10;
        number_inverse += (number % 10);
        number /= 10;
    }
    printf("Your number in inverse mode ==> %d", number_inverse);
    return 0;
}
