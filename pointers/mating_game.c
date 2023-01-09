/* Vamos a ver que pasa con los punteros aquí*/

#include <stdio.h>

int main() {
    int contestants[] = {1, 2, 3};
    int *choice = contestants; /* al hacer *choice se está asignando a *choice la variable que está en el puntero del array contestants. 
    Por lo que si cambia el orden de los elementos del array contestants, *choice sigue apuntando al primer elemento del array contestans,
    sea cual sea.
    */
    contestants[0] = 2;
    contestants[1] = contestants[2];
    contestants[2] = *choice;
    printf("I'm going to pick contestant number %i\n", *choice);
    return 0;
}