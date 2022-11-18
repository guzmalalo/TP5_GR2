#include <stdio.h>
#include "exo2.h"

#define MAX_T 100

int main() {
    // Declaration d'un tableau statique
    // avec une taille PHYSIQUE de 100
    int tableau[MAX_T] = {0};

    // Taille logique
    int n=0;
    int temp;
    int n_max;

    do {
        printf("nombre d'entiers à insérer ? ");
        scanf("%d", &n);
    } while (n > MAX_T || n < 0);

    for (int i = 0; i < n; ++i) {

        printf("N %d = ", i);
        scanf("%d", &temp);
        tableau[i] = temp;
    }

    n_max = tableau[0];

    for (int i = 0; i < n; ++i) {
        if(tableau[i] > n_max){
            n_max = tableau[i];
        }
    }

    printf("La valuer max est %d ", n_max);

    return 0;
}
