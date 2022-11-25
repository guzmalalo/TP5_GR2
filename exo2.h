
#ifndef TP5_EXO2_H
#define TP5_EXO2_H

#define MAX_T 100

/**
 * Remplissage d'un d'un tableau de taille MAX_T
 * @param tab Le tableau passe par adresse
 * @param n taille logique
 */
void remplieTab(int tab[MAX_T], int n);

/**
 * Trouve la valeur max d'un tableau
 * @param tab Le tableau à traiter
 * @param n la taille logique
 * @return max, c'est la valeur max
 */
int valMax(int tab[MAX_T], int n);

#endif //TP5_EXO2_H
