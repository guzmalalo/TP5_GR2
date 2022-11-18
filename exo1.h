
#ifndef TP5_GR2_EXO1_H
#define TP5_GR2_EXO1_H

/**
 * Alias pour mon structure
 */
typedef struct NombreRationnel NR;

/**
 * Déclaration d'une structure pour un
 * nombre rationnel
 */
struct NombreRationnel {
    int num;
    int den;
};

/**
 * Lit un nombre rationnel
 * @return
 */
NR saisie (void );

/**
 * Affiche un nombre rationnel
 * @param input structure de type NombreRattionnel
 */
void affichage(NR input);


/**
 * Multiplication de deux nombre rationnels a et b
 * @param a Structure de type NombreRationnel
 * @param b Structure de type NombreRationnel
 * @return c Résultat de a*b, c'est un NombrRationnel
 */
NR multiplication(NR a, NR b);

/**
 * Addition de deux nombres rationnels a et b
 * @param a Structure de type NombreRationnel
 * @param b Structure de type NombreRationnel
 * @return c Résultat de a+b, c'est un NombrRationnel
 */
NR addition(NR a, NR b);

#endif //TP5_GR2_EXO1_H
