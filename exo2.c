#include <stdio.h>
#include "exo2.h"


int main() {
    // Declaration d'un tableau statique
    // avec une taille PHYSIQUE de 100
    int tableau[MAX_T] = {0};

    // Taille logique
    int n=0;
    int temp;
    int n_max;

    // Taille logique
    do {
        printf("nombre d'entiers à insérer ? ");
        scanf("%d", &n);
    } while (n > MAX_T || n < 0);

    // Remplissage tableau
    remplieTab(tableau, n);

    // Troue la valer max
    n_max = valMax(tableau, n);

    // Résultat
    printf("La valuer max est %d ", n_max);
    return 0;
}

void remplieTab(int tab[MAX_T], int n){

    for (int i = 0; i < n; ++i) {
        printf("N %d = ", i);
        scanf("%d", &tab[i]);
    }

}

int valMax(int tab[MAX_T], int n){

    int n_max = tab[0];

    for (int i = 0; i < n; ++i) {
        if(tab[i] > n_max){
            n_max = tab[i];
        }
    }

}