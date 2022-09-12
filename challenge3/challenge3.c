#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i, estpremier;
    estpremier = 1;
    printf("Please enter a number \n");
    scanf("%d", &number);
    for(i = 2; i < number / 2; i++){
        if(number % 2 == 0){
            estpremier = 0;
            break;
        }

    }

    if(estpremier != 0){
        printf("%d est premier \n", number);
    }else{
        printf("%d est non premier \n", number);
    }

    return 0;
}
