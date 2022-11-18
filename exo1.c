#include <stdio.h>
#include "exo1.h"


/**
 * Main function
 * @return 0 if ok
 */
int main(){
    // Déclaration d'une variable de type
    // NombreRationnel
    NR n1;
    NR n2;
    NR res;

    // Initialisation
    n1 = saisie();
    n2 = saisie();

    // Operations *
    res = multiplication(n1, n2);

    // Affichage
    affichage(n1);
    printf(" * ");
    affichage(n2);
    printf(" = ");
    affichage(res);
    printf("\n");

    // Operation +
    res = addition(n1, n2);

    // Affichage
    affichage(n1);
    printf(" + ");
    affichage(n2);
    printf(" = ");
    affichage(res);
    printf("\n");

    return 0;
}

/**
 * Définition de la fonction de saisie
 * @return Une structure NombreRationnel
 */
NR saisie(void){
    NR temp;
    printf("Rentrez le numérateur: ");
    scanf("%d",&temp.num);
    printf("Rentrez le dénominateur: ");
    scanf("%d",&temp.den);
    return temp;
}

// Définition de la procedure affichage
void affichage(NR input){
    printf("%d / %d", input.num, input.den);
}


// Definition de la fonction multiplication
NR multiplication(NR a, NR b)
{
    NR c;

    c.num = a.num * b.num;
    c.den = a.den * b.den;

    return c;
}

// Definition de la fonction multiplication
NR addition(NR a, NR b)
{
    // variable locale
    NR c;
    c.num = a.num*b.den + b.num*a.den;
    c.den = a.den * b.den;

    return c;
}