#if !defined(TIC_TAC_TOE)
#define TIC_TAC_TOE

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define NBRE_JOUEUR 2
#define TAILLE 3

typedef struct joueurs
{
    char nom[50];
    char symbol;
}joueurs;

char init_plateauMA(char plateau[][TAILLE]);
int departage_jeuMA(char plateau[][TAILLE],joueurs j[]);
void afficher_plateauMA(char plateau[][TAILLE]);
int match_nulMA(char plateau[][TAILLE]);


#endif // TIC_TAC_TOE