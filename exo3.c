#include <stdio.h>
#include "exo3.h"

int main (){
    // Déclaration et initialisation du tableau
    int tab2D[LIN][COL] = {0};
    int tab1D[LIN*COL] = {0};

    // Remplissage
    remplissage2D(tab2D);

    // Affichage du tableau 2D
    affichage2D(tab2D);

    // Transformation
    transformation(tab2D,tab1D);

    // affichage tableau 1D
    affichage1D(tab1D);

    return 0;
}

void affichage2D(int tab[LIN][COL]){
    // Affichage
    for (int i = 0; i < LIN; ++i) {
        for (int j = 0; j < COL; ++j) {
            //message à l'utilisateur
            printf("%d ", tab[i][j] );
        }
        printf("\n");
    }
}

void affichage1D(int tab[LIN*COL]){
    // Affichage du tableau 1D
    printf("Tableau 1D \n");
    for (int i = 0; i < LIN*COL ; ++i) {
        printf("%d ", tab[i] );
    }
}


void remplissage2D(int tab[LIN][COL]){
    for (int i = 0; i < LIN; ++i) {
        for (int j = 0; j < COL; ++j) {
            //message à l'utilisateur
            printf("Rentrez la valeur [%d][%d] : ", i,j);
            scanf("%d", &tab[i][j]);
        }
    }
}


void transformation(int in[LIN][COL], int out[LIN*COL]){
    int comp =0;

    for (int i = 0; i < LIN; ++i) {
        for (int j = 0; j < COL; ++j) {
            out[comp] =  in[i][j];
            comp++;
        }
    }
}
