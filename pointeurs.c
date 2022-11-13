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

int equal_zero(int tab[], int size){
    int *pointeur;
    pointeur=tab;
    for(int i=0;i<size;i++){
        if(*pointeur ==0){
            printf("%d\n",i);
        }
        pointeur++;
    }
    return 0;
}

int copy_array(int tab[], int tab2[], int size){
    int *pointeur1, *pointeur2;
    pointeur1 = tab;
    pointeur2 = tab2;
    for(int i=0;i<size;i++){
        pointeur2 = pointeur1;
        printf("%d : %d\n", i,*pointeur2);
        pointeur1++;
        pointeur2++;
    }
}

int print_array(int tab[], int size){
    int *pointeur;
    pointeur = tab;
    for(int i=0;i<size;i++){
        printf("%d : %d\n", i,*pointeur);
        pointeur++;
    }

}

int swap_array(int tab[], int tab2[], int size){
    printf("Avant changement :\n");
    printf("Tableau 1 :           Tableau 2\n");
    int *pointeur1, *pointeur2;
    int *a,*b,temp;
    pointeur1 = tab;
    pointeur2 = tab2;
    for(int i=0;i<size;i++){
        printf("%d : %d           %d :  %d \n", i,*pointeur1,i,*pointeur2);
        pointeur1++;
        pointeur2++;
    }
    printf("Apres changement :\n");
    printf("Tableau 1 :           Tableau 2\n");
    pointeur1 = tab;
    pointeur2 = tab2;
    for(int i=0;i<size;i++){
        temp = *pointeur1;
        *pointeur1 = *pointeur2;
        *pointeur2 = temp;
        printf("%d : %d           %d :  %d \n", i,*pointeur1,i,*pointeur2);
        pointeur1++;
        pointeur2++;
    }
}
