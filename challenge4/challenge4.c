#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[8] = {10, 111, 20, 245, 80, 40, 10, 90};
    int i, somme;
    somme = 0;
    for(i = 0; i <= 8; i++){
        if(numbers[i] < 100 && numbers[i] > 9){
            somme += numbers[i];
        }
    }
    printf("The sum of your numbers positive ==> %d", somme);
    return 0;
}
