#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, number, un, ui, uj;
    do{
        printf("Please enter a number greather than two \n");
        scanf("%d", &number);
    }while(number < 2);
    ui = 0;
    uj = 1;
    printf("U1 = %d \n", uj);
    for(i = 2; i <= number; i++){
        un = ui + uj;
        printf("U%d = %d \n", i, un);
        ui = uj;
        uj = un;
    }

    return 0;
}
