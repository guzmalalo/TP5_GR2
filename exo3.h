//
// Created by Eduardo Guzman Maldonado on 25/11/2022.
//

#ifndef TP5_EXO3_H
#define TP5_EXO3_H

#define LIN 3
#define COL 4

/**
 * Affiche un tableau à deux dimensions
 * @param tab tableau de taille [LIN][COL]
 */
void affichage2D(int tab[LIN][COL]);

/**
 * Affiche un tableau à une dimensions
 * @param tab tableau de taille LIN * COL
 */
void affichage1D(int tab[LIN*COL]);

/**
 * Remplissag d'un tableau 2D
 * @param tab tableau de taille [LIN][COL]
 */
void remplissage2D(int tab[LIN][COL]);

/**
 * Copie les valeurs de in (tab 2D ) dans out(Tab 1D)
 * @param in Tableau à deux dimensions
 * @param out Tableau à unes dimensions
 */
void transformation(int in[LIN][COL], int out[LIN*COL]);

#endif //TP5_EXO3_H
