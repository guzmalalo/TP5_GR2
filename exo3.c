#include <stdio.h>
#include "exo3.h"

int main (){
    // Déclaration et initialisation du tableau
    int tab2D[LIN][COL] = {0};
    int tab1D[LIN*COL] = {0};

    int comp =0;

    // Remplissage
    for (int i = 0; i < LIN; ++i) {
        for (int j = 0; j < COL; ++j) {
            //message à l'utilisateur
            printf("Rentrez la valeur [%d][%d] : ", i,j);
            scanf("%d", &tab2D[i][j]);
        }
    }

    // Affichage
    for (int i = 0; i < LIN; ++i) {
        for (int j = 0; j < COL; ++j) {
            //message à l'utilisateur
            printf("%d ", tab2D[i][j] );
        }
        printf("\n");
    }

    // Transformation
    for (int i = 0; i < LIN; ++i) {
        for (int j = 0; j < COL; ++j) {
            tab1D[comp] =  tab2D[i][j];
            comp++;
        }
    }

    // Affichage du tableau 1D
    printf("Tableau 1D \n");
    for (int i = 0; i < LIN*COL ; ++i) {
        printf("%d ", tab1D[i] );
    }



    return 0;
}
