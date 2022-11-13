#include <stdio.h>
#include <stdlib.h>

int swap_int(int *a, int *b){
    printf("Avant : La valeur de a est : %d et la valeur de b est : %d \n",*a,*b);
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Apres : La valeur de a est : %d et la valeur de b est : %d \n",*a,*b);
    return 0;
}

int add_two_int( int *a, int *b){
    printf("a = %d et b = %d\n", *a, *b);
    int somme = *b + *a;
    *a = somme;
    printf("a = %d et b = %d\n", *a, *b);
    return 0;

}