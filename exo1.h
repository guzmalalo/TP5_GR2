//
// Created by Eduardo Guzman Maldonado on 10/11/2022.
//

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
struct NombreRationnel saisie (void );



#endif //TP5_GR2_EXO1_H
