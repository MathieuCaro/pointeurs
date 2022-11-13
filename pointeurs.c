#include <stdio.h>
#include <stdlib.h>

int swap_int(int *a, int *b){
    printf("Avant : La valeur de a est : %d et la valeur de b est : %d \n",*a,*b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Apres : La valeur de a est : %d et la valeur de b est : %d ",*a,*b);
    return 0;
}