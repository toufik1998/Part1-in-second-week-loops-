#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[5] = {10, -10, 10, 10, -2};
    int i, somme;
    somme = 0;
    for(i = 0; i <= 5; i++){
        if(numbers[i] < 0){
            continue;
        }else{
            somme += numbers[i];
        }
    }
    printf("Somme of all positive numbers ==> %d", somme);
    return 0;
}
