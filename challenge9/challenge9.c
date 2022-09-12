#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_base, number_exponent, exp;
    long result = 1;
    printf("Please enter a base number \n");
    scanf("%d", &number_base);
    printf("Please enter an exponent number \n");
    scanf("%d", &number_exponent);
    exp = number_exponent;
    while(number_exponent != 0){
        result *= number_base;
        printf("%d * %d = %d \n", result, number_base, result);
        --number_exponent;
    }
    printf("the power of %d at %d = %d", number_base, exp, result);
    return 0;
}
