#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, somme, n, max_number;
    max_number = 0;
    somme = 0;

    do{
        printf("Please enter a number \n");
        scanf("%d", &n);


        if(n < 100){
            somme += n;
        }

        if(n > max_number ){
            max_number = n;
        }

    }while(n > 0);
    printf("The sum of your numbers positive ==> %d", somme);
    printf("The max number is %d", max_number);

    return 0;
}
