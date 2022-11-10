#include <stdio.h>
#include "exo1.h"


/**
 * Main function
 * @return 0 if ok
 */
int main(){
    // Déclaration d'une variable de type
    // NombreRationnel
    struct NombreRationnel n1;

    // On peut utiliser un alias aussi
    NR n2;

    n1 = saisie();

    printf("Le numero est %d / %d", n1.num, n1.den);

    return 0;
}

/**
 * Définition de la fonction de saisie
 * @return Une structure NombreRationnel
 */
struct NombreRationnel saisie(){
    struct NombreRationnel temp;
    printf("Rentrez num den : ");
    scanf("%d %d",&temp.num, &temp.den);
    return temp;
}



